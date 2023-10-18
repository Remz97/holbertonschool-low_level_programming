#include "main.h"
/**
 * print_alphabet_x10 - entry point
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int b;
	char a;

	for (b = 0; b < 10; b++)
	{

	for (a = 'a'; a <= 'z'; a++)
	{
		_putchar(a);
	}
		_putchar('\n');
	}
}
