## Taskbag Assignment

* An RPC implementation of the task-bag described in `problem_statement.pdf`.
* The solution implemented above is such that the client queries item pairs in the taskbag which is implemented as an integer array and the server retrieves and sums the pair and then returns the sum to the client.

### File descriptions:

| File | Description |
| :-: | :-: |
|**add.x:** | IDL file. It is used to create the rpc client stub and server skeleton. |
| add.h | header file|
| add_client.c |  client program |
| add_clnt.c | client stub |
| add_server.c | server program |
| add_svc.c | server skeleton | 
| add_xdr.c| XDR routines used by both the client and the server |
| Makefile.add | Makefile (for compilation purposes) |

### Compilation and Execution:

* Compile the client and server by executing, `make -f Makefile.add` and then run the server by running the generated binaries .i.e `./add_server` to start the server. and `./add_client localhost <num1> <num2>`.


