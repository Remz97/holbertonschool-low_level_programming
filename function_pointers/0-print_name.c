#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - skd
 * @name: sd
 * @f: sd
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
		(*f)(name);
}
