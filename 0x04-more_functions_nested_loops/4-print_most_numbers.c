#include "main.h"
/**
 * print_most_numbers - prints 0-9
 *
 * Return: void
 */
void print_most_numbers(void)
{
	charc c;

	for (c = '0'; c <= '9'; c++)
	{
		if (!(c == '2' || c == '4'))
			_putchar(c);
	}
	_putchar('\n');
}

