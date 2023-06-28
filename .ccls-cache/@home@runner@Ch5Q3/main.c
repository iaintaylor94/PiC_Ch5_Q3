// Generate a table of every fifth triangular number between 5 and 50

#include <stdio.h>

int main(void) {

  // Create heading
  printf ("TRIANGULAR NUMBERS\n");
  printf (" n     triangle  \n");
  printf ("--- --------------\n");
  
  for (int i = 5; i <= 50; i += 5) {
    printf ("%3i       %7i      \n", i, i * ( i + 1) / 2);
  }

  printf ("\n");
  
  return 0;
}