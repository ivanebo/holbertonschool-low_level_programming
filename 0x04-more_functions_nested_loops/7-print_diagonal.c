#include "holberton.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: variable
 * Return: (int)
 *
 */

void print_diagonal(int n)
{

	int m, o;

	if (n <= 0)
	{
		_putchar('\n');
	}

	else
	{
		m = 0;
		while (m < n)
		{
			o = 0;
			while (o < m)
			{
				_putchar(' ');
				o++;
			}
			_putchar('\\');
			_putchar('\n');
			m++;
		}
	}
}
