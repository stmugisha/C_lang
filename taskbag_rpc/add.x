/* Converting the add.c to use rpc for the add() function. */
/*
Once the add() is turned into a remote procedure,
it can be called anywhere on a network.

We'll first write a protocol specification that describes the remote version of add().i.e determine types of all procedure-calling args and
return args.
*/

/* combine the arguments to be passed to the server side in a structure
*/

struct numbers{
     int a;
     int b;
};

program ADD_PROG{
   version ADD_VERS{
       int add(numbers)=1;
   }=1;
}=0x4562877;
