#include <stdio.h>
/**
 * Main - Entry point
 * Description: prints all single digit numbers of base 10 starting from 0
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
