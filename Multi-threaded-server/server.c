#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <sys/socket.h>
#include <linux/in.h>
#include <unistd.h>

// size of array 
#define MAX 16 

// maximum number of threads 
#define MAX_THREAD 4 

typedef struct
{
	int sock;
	struct sockaddr address;
	int addr_len;
} connection_t;

int a[] = {1,3,5,7,11,13,17,19,23,29,30,40,50,60,70,80,90}; 
int sum[4] = { 0 }; 
int part = 0;
char buffer[1000]; 

void* sum_array(void* arg) 
{ 

	// Each thread computes sum of 1/4th of array 
	int thread_part = part++; 

	for (int i = thread_part * (MAX / 4); i < (thread_part + 1) * (MAX / 4); i++) 
		sum[thread_part] += a[i]; 
} 

int main(int argc, char ** argv)
{
	int sock = -1;
	struct sockaddr_in address;
	int port;
	connection_t * connection;
	//pthread_t thread;
        pthread_t threads[MAX_THREAD];

	/* check for command line arguments */
	if (argc != 2)
	{
		fprintf(stderr, "usage: %s port\n", argv[0]);
		return -1;
	}

	/* obtain port number */
	if (sscanf(argv[1], "%d", &port) <= 0)
	{
		fprintf(stderr, "%s: error: wrong parameter: port\n", argv[0]);
		return -2;
	}

	/* create socket */
	sock = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
	if (sock <= 0)
	{
		fprintf(stderr, "%s: error: cannot create socket\n", argv[0]);
		return -3;
	}

	/* bind socket to port */
	address.sin_family = AF_INET;
	address.sin_addr.s_addr = INADDR_ANY;
	address.sin_port = htons(port);
	if (bind(sock, (struct sockaddr *)&address, sizeof(struct sockaddr_in)) < 0)
	{
		fprintf(stderr, "%s: error: cannot bind socket to port %d\n", argv[0], port);
		return -4;
	}

	/* listen on port */
	if (listen(sock, 5) < 0)
	{
		fprintf(stderr, "%s: error: cannot listen on port\n", argv[0]);
		return -5;
	}

	printf("%s: ready and listening\n", argv[0]);
	
	while (1)
	{
		/* accept incoming connections */
		connection = (connection_t *)malloc(sizeof(connection_t));
		connection->sock = accept(sock, &connection->address, &connection->addr_len);
		if (connection->sock <= 0)
		{
			free(connection);
		}
		else
		{
			/* start a new thread but do not wait for it */
			//pthread_create(&threads[0], 0, process, (void *)connection); 

	              // Creating 4 threads 
	              for (int i = 0; i < MAX_THREAD; i++) 
		            pthread_create(&threads[i], NULL, sum_array, (void*)connection); 

	               // joining 4 threads i.e. waiting for all 4 threads to complete 
	              for (int i = 0; i < MAX_THREAD; i++) 
		            pthread_join(threads[i], NULL); 

	              // summing all 4 thread sums to a final sum
	              int total_sum = 0; 
	              for (int i = 0; i < MAX_THREAD; i++){
		          total_sum += sum[i]; 
                          int temp_ = sum[i];
                          printf("Thread %d sum is %d\n", i, temp_);
                      }
	              printf("Total sum of all Threads is %d\n", total_sum);
		      buffer[1] = total_sum;
		      pthread_detach(threads);
 		      //write(sock, buffer, 1000);
		}
	}
	
	return 0;
}
