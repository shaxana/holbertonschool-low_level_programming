#include "main.h"

/**
 * print_line - prints line 
 *
 * @n: variable.
 */
void print_line(int n)
{
	int i = 0;

	for (i = 0; i < n; i++)
	{
		if (n > 0)
		_putchar('_');
	}
	_putchar('\n');
}
