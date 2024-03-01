#include "main.h"

/**
 * main - check the code
 *
 * @n: variable.
 */
void print_line(int n)
{

	for (n = 0; n < 10; n++)
	{
		if(n > 0)
		_putchar('_');
	}
	_putchar('\n');
}
