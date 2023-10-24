#include "main.h"
/**
 * puts2 - main
 * @str: is int
 *
 */
void puts2(char *str)
{
	int s;

	for (s = 0; str[s] != '\0'; s++)
	{
	_putchar(str[s]);
	puts2(str);
	}
	_putchar('\n');
}
