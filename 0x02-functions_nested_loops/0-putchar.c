#include "main.h"
/**
 * main - Enrtry point
 *
 * Return: Always 0 (Success)
 */
int main(void) 
{
	char sh[] = "_putchar";
	int c;

	for (c = 0; c < 8; c++)
	{
		_putchar(sh[c]);
	}
	_putchar('\n');
	return (0);
}

