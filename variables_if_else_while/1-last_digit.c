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
printf("Last digit of n is %d");
return (0);
}
