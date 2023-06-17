#include <stdio.h>
/**
 * main - Entry point
 * Description: Print all possible combination of two digit
 * Return: always 0 (success)
 */
int main(void)
{
	int i;
	int j;

	for (i = 0; i < 9; i++)
	{
	for (j = i + 1; j < 10; j++)
	{
		putchar('0' + i);
		putchar('0' + j);
		if (i < 8 || j < 9)
		{
		putchar(',');
		putchar(' ');
		}
	}
	}
	putchar('\n');
	return (0);
}
