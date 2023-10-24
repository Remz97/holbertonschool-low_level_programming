#include "main.h"
/**
 * print_rev - main
 * @s: is int
 *
 */
void puts_half(char *str)
{
	int len = 0;
	int start;
	int i;

	while (str[len] != '\0')
		len++;
	start = len / 2;
	
	for (i = start; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
