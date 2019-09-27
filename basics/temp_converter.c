//Author: Stephen Mugisha

//reference: The C programming language by Ritchie Kernighern

#include <stdio.h>
/*
Converting fahrenheit(F) temperatures to their corresponding celsius(C) and kelvin(K) values.
based on scientific formulae (C) = (5/9)*(F-32) and K = 
*/
float main()
{
  float fahrenheit, celsius;
  int lower, upper, step;

  lower = 0;   //lower bound/limit of the temperatures
  upper = 300; //upper bound
  step = 15;   //step-size

  fahrenheit = lower;
  while (fahrenheit <= upper){
      celsius = (5.0/9.0) * (fahrenheit -32.0);
      printf("%3.0f \t %5.1f \n", fahrenheit, celsius); //
      fahrenheit += step;
  }
}

/*
Notes:
%3.0f and %6.1f specify return 3 chars and no decimal place(dpl) and 6 chars rounded to 1 dpl
respectively
*/