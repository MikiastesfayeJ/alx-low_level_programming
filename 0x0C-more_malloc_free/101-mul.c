#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _isdigit - checks if character is digit
 * @c: the character to check
 *
 * Return: 1 if digit, 0 otherwise
 */
int _isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

/**
 * _strlen - returns the length of a string
 * @s: the string whose length to check
 *
 * Return: integer length of string
 */
int _strlen(char *s)
{
	int i = 0;

	while (*s++)
		i++;
	return (i);
}

/**
 * big_multiply - multiply two big number strings
 * @num1: the first big number string
 * @num2: the second big number string
 *
 * Return: the product big number string
 */
char *big_multiply(char *num1, char *num2)
{
	char *mul;
	int l1, l2, a, b, c, x;

	l1 = _strlen(num1);
	l2 = _strlen(num2);
	mul = malloc(a = x = l1 + l2);
	if (!mul)
		printf("Error\n"), exit(98);
	while (a--)
		mul[a] = 0;

	for (l1--; l1 >= 0; l1--)
	{
		if (!_isdigit(num1[l1]))
		{
			free(mul);
			printf("Error\n"), exit(98);
		}
		a = num1[l1] - '0';
		c = 0;

		for (l2 = _strlen(num2) - 1; l2 >= 0; l2--)
		{
			if (!_isdigit(num2[l2]))
			{
				free(mul);
				printf("Error\n"), exit(98);
			}
			b = num2[l2] - '0';

			c += mul[l1 + l2 + 1] + (a * b);
			mul[l1 + l2 + 1] = c % 10;

			c /= 10;
		}
		if (c)
			mul[l1 + l2 + 1] += c;
	}
	return (mul);
}


/**
 * main - multiply two big number strings
 * @argc: the number of arguments
 * @argv: the argument vector
 *
 * Return: Always 0 on success.
 */
int main(int argc, char **argv)
{
	char *mul;
	int a, c, x;

	if (argc != 3)
		printf("Error\n"), exit(98);

	x = _strlen(argv[1]) + _strlen(argv[2]);
	mul = big_multiply(argv[1], argv[2]);
	c = 0;
	a = 0;
	while (c < x)
	{
		if (mul[c])
			a = 1;
		if (a)
			_putchar(mul[c] + '0');
		c++;
	}
	if (!a)
		_putchar('0');
	_putchar('\n');
	free(mul);
	return (0);
}
