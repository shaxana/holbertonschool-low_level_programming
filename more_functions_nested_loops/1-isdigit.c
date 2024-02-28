#include "main.h"
#include <stdio.h>
/**
 * _isdigit - checks if character digit.
 * @c: character to check.
 * Return: 1 if character is digit, otherwise 0.
 */
int _isdigit(int c)
{
if (c >= 48 && c <= 57)
	return (1);
else
	return (0);
}
