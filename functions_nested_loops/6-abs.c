#include "main.h"
#include <stdlib.h>

/**
 * _abs - Entry point
 * main.h header file
 * @n: is parameter
 * Return:0
 */

int _abs(int n)

{
	if (n <= 0)
	{
		return (n);
	}
	else	
	{
		return (n * (-1));
	}
}
