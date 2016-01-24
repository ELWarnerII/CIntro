/**
   @file warmup.c
   @author Louis Warner (elwarner)
   A program designed to help the programmer learn basic C concepts.
   It contains methods for printing a given character a specified number
   of times, drawing a rectangle, and finding and describing the
   x-intercept of a line.
 */

#include <stdio.h>
#include <stdlib.h>

/**
   Print n copies of the given character c.
   @param c character to print.
   @param n number of times to print c, must be non-negative.
*/
void nTimes( char c, int n ){
  for(int i = 0; i < n; i++){
    printf("%c", c);
  }
}

/**
   Print out a rectangle of a given size and made from the given inner
   and outer character symbols.
   @param width the width of the rectangle to be printed, should be 2 or greater.
   @param height the number of rows high the rectangle should be, must be 2 or greater.
   @param outer the character symbol to use for the outer edge of the rectangle.
   @param inner the character symbol fill the inside of the rectangle with.
 */
void filledBox( int width, int height, char outer, char inner ){
  for(int i = 1; i <= height; i++){
    if(i == 1 || i == height){
      nTimes(outer, width);
      printf("\n");
    } else{
      printf("%c", outer);
      nTimes(inner, width - 2);
      printf("%c\n", outer);
    }
  } 
}

/**
   Return the X intercept for a line defined as y = m x + b.
   @param m the slope of the line, must be non-zero.
   @param b the y intercept of the line.
   @return the x intercept
 */
double intercept( double m, double b ){
  double xintercept = 0;
  xintercept -= b;
  xintercept = xintercept/m;
  return xintercept;
}

/**
   Print a report about the line, y = m x + b, including its x intercept.
   @param m the slope of the line, must be non-zero.
   @param b the y intercept of the line.
 */
void describeLine( double m, double b ){
  double xintercept = intercept(m, b);
  printf("Line y = %.3f x + %.3f has an x intercept of: %.3f\n", m, b, xintercept);
}

/**
   Starting point for the program, prints a couple of rectangles and
   reports about a couple of lines.
   @return Exit status for the program.
 */
int main(){
  // Print a short, wide box with # on the outside and . on the inside.
  filledBox( 20, 6, '#', '.' );
  printf( "\n" );

  // Print tall, thin box with * on the outside and spaces inside.
  filledBox( 7, 11, '*', ' ' );
  printf( "\n" );

  // Report about one line.
  describeLine( 0.75, 18.3 );

  // Then, another line.
  describeLine( -3.4281, 102.0 );

  return EXIT_SUCCESS;
}