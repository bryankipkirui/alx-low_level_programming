#include <stdio.h>
/**
 * main - Entry point
 * Description: 'Print number of base 10 using putchar'
 * Return: always 0 (success)
 */
int main(void)
{
	int b;

	for (b = 0; b <= 9; b++)
	{
		putchar(b + 48);
	}
	putchar('\n');
	return (0);
}
