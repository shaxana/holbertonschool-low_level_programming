#include "main.h"
#include <stdio.h>
/**
 * _memcpy - copies n bytes of memory
 *
 * @src: source to be copied from
 * @dest: pointer to destination str
 * @n: number of bytes to copi
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;
	char *start = dest;

	for (i = 0 ; i < n; i++)
	{
		*dest++ = *src++;
	}
	return (start);
}
