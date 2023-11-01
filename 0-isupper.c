#include "main.h"
/**
 * _isupper - Entry point
 * @c: is int
 * Print natural number until 98;
 * Return: 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
