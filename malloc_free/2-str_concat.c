#include "main.h"
#include <stdlib.h>
char *str_concat(char *s1, char *s2)
{
	int i;
	int str_length_1 = 0;
	int str_length_2 = 0;
	int total_length;
	char *concatenated;

	if (s1 == NULL)
		return NULL;
	if (s2 == NULL)
		return NULL;
    // 1. find length of s1 and s2
	while (s1[str_length_1] != '\0')
		str_length_1++;
	while (s2[str_length_2] != '\0')
		str_length_2++;
    // 2. malloc for concatenated
	total_length = str_length_1 + str_length_2;
	concatenated = malloc(sizeof(char) * (total_length + 1));
	if (concatenated == NULL)
		return NULL;
    // 3. copy s1 to concatenated; then copy s2 to concatenated
	for (i=0; s1[i] != '\0'; i++)
		concatenated[i] = s1[i];
	for (i=0; s2[i] != '\0'; i++)
		concatenated[str_length_1 + i] = s2[i];
		return concatenated;
}
