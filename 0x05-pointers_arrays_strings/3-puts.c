#include "main.h"
/**
 * _puts - function with one argument
 * @str: one char type argument
 *
 * Return: none
 */
void _puts(char *str)
{
	while(*str)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}

