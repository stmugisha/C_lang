// Author: Stephen Mugisha

// Recursion is a programming technique where a function calls itself
// Below is an example of a recursive program that computes the fibonacci numbers

#include <stdio.h>

int fibonacci(int num){
    /* Returns the (num)th fibonacci number
    Args:
        num: any position of a number in the fibonacci sequence
    */

    if(num<2){
        //the base case
        return num;
    }
    else{
        //the recursive case
        return(fibonacci(num-1) + fibonacci(num-2));
    }
}
int main(){
    int n, i;
    printf("Enter any positon of a fibonacci number:\n");
    scanf("%d", &n); //reading user input

    printf("The fibonacci of %d is: \t %d \t\n", n, fibonacci(n));

}