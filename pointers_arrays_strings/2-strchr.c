#include <stdio.h>
/**
 * _strchr - finds if character occurs in string
 *
 * @s: string to check
 * @c: character to find in string
 *
 * Return: pointer to first instance of c, othewise NULL
 */
char *_strchr(char *s, char c)
{
	int i =  0;

	while (*(s + i))
	{
		if (*(s + i) == c)
			return (s + i);
		i++;

	}
	return NULL;
}
