#include <stdio.h>
/**
 * main - entry point
 *
 * Return: void
 */
int main(void)
{
	int a;
	int b;

	for (a = 0; a < 9; a++)
	for (b = 0; b <= 9; b++)
{
		putchar(a + '0');
		putchar(b + '0');

	if (a <= b && a != b)
{
		putchar(',');
		putchar (' ');
}
}
	putchar('\n');
	return (0);
}
