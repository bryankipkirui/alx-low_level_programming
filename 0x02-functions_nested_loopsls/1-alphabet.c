#include "main.h"
/**
 * main - Entry point
 * Description: print_alphabet - make the alphabet.
 * Return: void
 */
void print_alphabet(void);
{
	char ch;

	for (ch = 97; ch <= 122; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}
