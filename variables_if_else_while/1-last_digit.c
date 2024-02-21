#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main -entry point
 *
 * Return Always 0 (success)
 */

int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
if(n>5)
{
printf("Last digit of n is %d and is greater than 5");
}
else if(n==0) 
{
printf("Last digit of n is %d");
}
else if(n<6 && n!=0)
{
printf("Last digit of n is %d and less than 6 and not 0");
}
return (0);
}
