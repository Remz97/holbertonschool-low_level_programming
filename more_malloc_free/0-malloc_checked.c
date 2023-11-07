#include <stdlib.h>
#include <stdio.h>

/**
 * *malloc_checked - ss
 * @b: sf
 * 
 **/

void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}

