#include "main.h"
/**
 * _isdigit - Entry point
 * @c: is int
 * Print natural number until 98;
 * Return: 0
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
