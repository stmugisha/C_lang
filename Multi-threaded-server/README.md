## Taskbag Assignment

* Above we implement a simple parallel `add` server that partitions the array into chunks and assigns these chunks to different threads/workers for the addition operation. The results of these individual thread are then summed for the final result.

The approach taken to solving this parallel computation task is as follows:
* Implement a multi-threaded server `server.c` that splits a single task into subtasks/threads and thereafter merge the results of the individual threads to get a final result.

* A client `client.c` process connects to the server on the same port and triggers the server operations.

### Compilation and Execution:

* Compile the server by running, `gcc -pthread -o server server.c` and then run the server by running the generated binary .i.e `./server <server-port>`
* To compile the client,<br/>
run `gcc client.c -o client` then to run the generated binary by running `./client localhost <server-port> "<any-text>"`
 
