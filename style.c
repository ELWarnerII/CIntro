/**
   @file style.c
   @author Louis Warner (elwarner)
   A program designed to help the programmer learn basic C style formatting.
   Previously, the program contained many formatting errors that were corrected.
   It is now correctly formatted, and the output of running the program is a
   printed sequence of values.
 */
 
#include <stdio.h>

/**
   Prints all lower-case letters of the English alphabet.
*/
void sleepy(){
  for (char c = 'a'; c <= 'z'; c++){
    printf("%c", c);
  }
  printf("\n");
}

/**
   Takes an integer and increases it until it is divisible by 7.
   @param x integer to test
   @return the next integer divisible by seven
*/
int grumpy(int x){
  while(x % 7 != 0){
    x++;
  }
  return x;
}

/**
   Prints all integers from 1 to 100 that are divisible by 7.
*/
void dopey(){
  for(int i = 1; i < 100; i += 10){
    int x = grumpy(i); printf("%d\n", x );
  }
}

/**
   Starting point for the program, prints the lower-case English
   alphabet and all integers from 1 to 100 that are divisible by 7.
   @return Exit status for the program.
 */
int main(){ 
  sleepy(); 
  dopey(); 
  return 0;
}