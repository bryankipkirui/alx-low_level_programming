#include <stdio.h>
/**
 * main - Entry point
 * Description: 'Print all possible combination of three digits'
 * Return: always 0 (success)
 */
int main(void)
{
	int a, b, c;

	for (a = 0; b < 8; a++)
	{
	for (b = a + 1; b < 9; b++)
	{
	for (c = b + 1; c < 10; c++)
	{
		putchar('0' + a);
		putchar('0' + b);
		putchar('0' + c);
		if (a < 8 || b < 9 || c < 10)
		{
		putchar(',');
		putchar(' ');
		}

	}
	}
	}
	putchar('\n');
	return (0);
}
