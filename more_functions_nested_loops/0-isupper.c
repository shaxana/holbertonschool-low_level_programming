#include "main.h"
#include <stdio.h>

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
	char c;

if(c = 'A')
{
printf("%c: %d\n", c, _isupper(c));
return (1);
}
else if(c = 'a')
{
printf("%c: %d\n", c, _isupper(c));
return (0);
}
}
