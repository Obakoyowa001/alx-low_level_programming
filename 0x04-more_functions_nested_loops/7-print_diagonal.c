#include "main.h"
/**
 * print_diagonal - function that draws a diagonal line on the terminal
 * @n: number if times \ should be printed
 * Return: void
 */
void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
			for (j = 1; j < 1; j++)
			{
				_putchar(' ');
				_putchar('\n');
			}
	}
	else
	{
		_putchar('\n');
	}
}
