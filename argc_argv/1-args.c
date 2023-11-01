#include <stdio.h>
/**
 * main - main funcion
 * @argc: arguments past in unix count
 * @argv: strings pasted
 * ne vend te int argc mund te __attribute__((unused)) argc
 * Return: Return 0
 */
int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", argc);
		return (0);
}
