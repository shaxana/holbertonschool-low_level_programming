#include "main.h"
#include <stdio.h>

/**
 * _memcpy - copies memory area
 * @s: memory area
 * @d: memory area
 * @n: number of bytes
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;
	char *src, *dest;

	for (i = 0 ; i < n; i++)
	{
		*src = dest;
	}
	return (src);
}
