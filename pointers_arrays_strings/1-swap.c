#include "main.h"
/**
 * swap_int - main
 * @a: is int
 * @b: is int
 *
 */
void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
