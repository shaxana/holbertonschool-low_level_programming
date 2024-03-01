#include "main.h"

/**
 * print_line - function to print line
 * @n : integer value
 * Return: Always 0.
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
