#include <stdio.h>
/**
 * main - main funcion
 * @argc: arguments past in unix count
 * @argv: strings pasted
 * ne vend te int argc mund te __attribute__((unused)) argc
 * Return: Return 0
 */
int main(__attribute__((unused)) int argc, char *argv[])
{

	printf("%s\n", argv[0]);
	return (0);
}
