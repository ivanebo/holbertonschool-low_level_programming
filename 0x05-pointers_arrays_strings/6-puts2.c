#include "holberton.h"

/**
 * puts2 - prints every other character of a string
 * @str: pointer
 *
 *
 */


void puts2(char *str)
{
	int aux = 1;

	while (*str != 0)
	{
		if ((aux % 2) != 0)
		{
			_putchar(*str);
		}
		str++;
		aux++;
	}
	_putchar('\n');
}
