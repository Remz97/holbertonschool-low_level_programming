#include "main.h"
/**
 * print_line - Entry point
 * @n: is int
 * Print natural number until 98;
 * Return: 0
 */
void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}
	for (i = 0; i < n; i++)
	{
		_putchar ('_');
	}
		_putchar ('\n');
}
