#include "main.h"
/**
 * _putchar - writes the character i to stdout
 * print_most_numbers - print numbers from 0 to 9 excluding 2 and 4
 * Return: always 0
 */

void print_most_numbers(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		if (i == 50 || i == 52)
		continue;

		_putchar(i);

	}
	_putchar('\n');
}
