#include <stdio.h>
#include <stdlib.h>
/**
 * main - main funcion
 * @argc: arguments past in unix count
 * @argv: strings pasted
 * ne vend te int argc mund te __attribute__((unused)) argc
 * Return: Return 0
 */
int main(int argc, char *argv[])
{
	int mul;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
		mul = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mul);
			return (0);
}
