#include "main.h"

/**
 * print_diagonal - printing lines diagonally
 * @n: input varible
 * Return: void
 */
void print_diagonal(int n)
{
	int m, k;

	if (n <= 0)
		_putchar('\n');
	for (m = 0; m < n; m++)
	{
		for (k = 0; k < m; k++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}

}
