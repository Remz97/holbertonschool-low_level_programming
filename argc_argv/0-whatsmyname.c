#include "stdio.h"
/**
 * main - main funcion
 * @argc: arguments past in unix count
 * @argv: strings pasted
 * Return: Return 0
 */
int main(int __attribute__((unused)) argc, char *argv[])
{
	int i;

	for (i = 0; i < '\0'; i++)
	{
		printf("%s\n ", argv[i]);
	}
		return (0);
}
