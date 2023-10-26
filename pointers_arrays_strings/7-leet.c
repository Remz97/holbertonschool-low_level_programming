#include "main.h"
/**
 * leet - changes all lowercase letter of a string to uppercase
 * @str: string
 * Return: charachter
 */

char *leet(char *str)
{
	int i, j;

	char lett[10] = {"aAeEoOtTlL"};
	char num[10] = {"4433007711"};

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (str[i] == lett[j])
				str[i] = num[j];
		}
	}

	return (str);
}
