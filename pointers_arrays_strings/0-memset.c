#include "main.h"
#include <stdio.h>
/**
 * simple_print_buffer - prints buffer in hexa
 * @buffer: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: Nothing.
 */
void simple_print_buffer(char *s, char buffer, unsigned int n)
{
	unsigned int i;
	i = 0;

	while (i < n)
	{
		*s++ = buffer;
		i++;
	}
	return (buffer);
}
