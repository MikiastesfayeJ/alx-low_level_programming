#include <stdio.h>
/**
 * main - main Function
 *
 * Return: 0
 */
int main(void)
{
	int i = 0;

	for (i = 48; i < 57; i++)
	{
		putchar(i);
		putchar(',');
	}
	putchar('\n');

	return (0);
}

