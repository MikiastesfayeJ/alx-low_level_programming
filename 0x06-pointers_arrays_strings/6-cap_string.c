#include "main.h"
/**
 * separators - checks and ensure that all string is capitalized
 * @c: character to be checked
 *
 * Return: if separator return 1. Otherwise return 0;
 */
int separator(char c)
{
	switch (c)
	{
		case ' ':
		case '\t':
		case '\n':
		case ',':
		case ';':
		case '.':
		case '!':
		case '?':
		case '"':
		case '(':
		case ')':
		case '{':
		case '}':
		return (1);
		default:
		return (0);
	}
}

