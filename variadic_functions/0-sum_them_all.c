#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * sum_them_all - Calculate the sum of its parameters.
 * @n: The number of parameters.
 * @...: Variable number of parameters.
 *
 * Return: The sum of the parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int total_sum = 0;
	va_list numb;

	va_start(numb, n);

	if (n == 0)
		return 0;

	for (i = 0; i < n; i++)
	{
		total_sum += va_arg(numb, int);
	}
	va_end(numb);

	return total_sum;
}
