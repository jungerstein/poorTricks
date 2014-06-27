/* 1toN.c
 * To find 1 + 2 + 3 + ... + N with tricks. 
 * W/o control statements. 
 * W/o (?:). 
 * W/o mul and div. 
 * Coded by Jungerstein. 
 */

#include <stdio.h>

int summe(int *n, int *s)
{
  return ((*n == 0) || (*s += *n, (*n)--, summe(n, s))); 
}

/* Tester. */
int main(void)
{
  int n = 100; 
  int s = 0;
  summe(&n, &s);
  printf("sum 1 to 100 = 5050, trick comp'd as: %d\n", s);
}
