#include "main.h"
/**
 * print_square - Entry point
 * @size: is int
 * Print natural number until 98;
 * Return: 0
 */
void print_square(int size)
{
	int i;
	int j;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < i; j++)
		{
			_putchar('#');
		}
			_putchar('\n');
	}
}
