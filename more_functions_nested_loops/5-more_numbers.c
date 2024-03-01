#include "main.h"

/**
 * more_numbers - prints 10 times numbers from 0 to 14 
 */
void more_numbers(void)
{
	int i;

	for(i = 0; i < 15; i++)
	{
		_putchar(i * 10);
	}
	_putchar('\n');
}
