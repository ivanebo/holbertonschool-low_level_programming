#include "holberton.h"

/**
 * main - prints the numbers from 1 to 100
 * Fizz instead of the number and for the multiples of five print Buzz
 * For numbers which are multiples of both three and five print FizzBuzz
 * Return: (0)
 */

int main(void)
{
	int n;

	n = 1;
	while (n <= 100)
	{
		if (n != 100)
		{
			if ((n % 3 == 0) && (n % 5 == 0))
			{
				printf("FizzBuzz ");
			}
			else if (n % 5 == 0)
			{
				printf("Buzz ");
			}
			else if (n % 3 == 0)
			{
				printf("Fizz ");
			}
			else
			{
				printf("%d ", n);
			}
		}
		else if ((n % 5 == 0) && (n == 100))
		{
			printf("Buzz");
		}
		n++;
	}
		printf("\n");
		return (0);
}
