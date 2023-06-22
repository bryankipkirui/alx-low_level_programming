#include "main.h"
/**
 * main - Entry point
 * Description:  prints_alphabet_*10
 * Return: void
 */
void print_alphabet_x10(void)
{
	int n;
	int i;

	while (i < 10)
	{
	for (n = 97; n <= 122; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
	i++;
	}
}
