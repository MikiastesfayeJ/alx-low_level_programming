#include "main.h"
/**
 * swap_int - function with two int type pointer argument
 * @a: 1st argument
 * @b: 2nd argument
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

