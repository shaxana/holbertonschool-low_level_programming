#include<stdio.h>

/**
 * main - Entry print
 *
 * Return: Always 0 (Success)
 */
int main (void)
{
char c;
int a;
long b;
long long d;
float f;
printf("Size of a char: %ld byte(s)\n", sizeof(c));
printf("Size of a int: %ld byte(s)\n", sizeof(a));
printf("Size of a long: %ld byte(s)\n", sizeof(b));
printf("Size of a long long: %ld byte(s)\n", sizeof(d));
printf("Size of a float: %ld byte(s)\n", sizeof(f));
return(0);
}
