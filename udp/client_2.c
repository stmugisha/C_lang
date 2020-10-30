// Cient side code 
#include <netinet/in.h> 
#include <stdio.h> 
#include <string.h> 
#include <sys/socket.h> 
#include <stdlib.h>

 
int main() 
{ 
	int clientSocket, portNum, nBytes; 
	char file_buffer[1000], path[1024], buffer[1000]; 

	// store the secret key in an array 
	char const key[1000] = "HIDDENKEY"; 
	struct sockaddr_in serverAddr; 
	socklen_t addr_size; 
	int i; 
	clientSocket = socket(PF_INET, SOCK_DGRAM, 0); 

	serverAddr.sin_family = AF_INET; 
	serverAddr.sin_port = htons(5004); 
	serverAddr.sin_addr.s_addr = inet_addr("127.0.0.1"); 
	memset(serverAddr.sin_zero, '\0', sizeof serverAddr.sin_zero); 

	addr_size = sizeof serverAddr; 

	while (1) { 
		printf("Specify file name: \n"); 
		gets(path); 
		FILE* fp; 
		fp = fopen(path, "r"); 
		if (fp == NULL) { 
			printf("file does not exist\n"); 
		} 

		fseek(fp, 0, SEEK_END); 
		size_t file_size = ftell(fp); 
		fseek(fp, 0, SEEK_SET); 

		if (fread(file_buffer, file_size, 1, fp) <= 0) { 
			printf("unable to copy file into buffer\n"); 
			exit(1); 
		} 

		if (sendto(clientSocket, file_buffer, 1000, 0, (struct sockaddr*)&serverAddr, 
																	addr_size) < 0) { 
			printf("error in sending the file\n"); 
			exit(1); 
		} 

		bzero(file_buffer, sizeof(file_buffer)); 

		nBytes = recvfrom(clientSocket, buffer, 1024, 0, NULL, NULL); 

		printf("Received from server: \n"); 

		// printing decrypted message 
		for (i = 0; i < 20; ++i) 
			printf("%02X ", buffer[i]); 
		printf("\n"); 

		char x[1000]; 
		for (i = 0; i < nBytes - 1; ++i) 
			x[i] = (char)(buffer[i] ^ key[i]); 

		printf("Decrypted message: \n"); 
                int sum = 0;
		for (i = 0; i < 20; ++i) {
			printf("%c ", x[i]);
                }
		printf("\n"); 
	} 

	return 0; 
} 

