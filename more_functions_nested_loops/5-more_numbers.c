#include "main.h"

/**
 * more_numbers - prints 10 times numbers from 0 to 14 
 */
void more_numbers(void)
{
	int i=0;

	for(; i < 14; i++)
	{
		_putchar((48 + i)*10);
	}
	_putchar('\n');
}
