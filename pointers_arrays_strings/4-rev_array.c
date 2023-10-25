#include "main.h"
/**
 * _strncat - concatenates two strings
 * @dest: destination
 * @src: source
 * @n: number of bytes
 * Return: return a pointer to the resulting string dest
 */
void reverse_array(int *a, int n)
{
	int start, end, tmp;

	start = 0;
	end = n - 1;

	while (start < end)
	{
		tmp = a[start];
		a [start] = a[end];
		a [end] = tmp;
		start++;
		end--;
	}
}
