#include "main.h"
/**
 * rev_string - main
 * @s: is int
 *
 */
void rev_string(char *s)
{
	int length = 0;
	int start, end;
	char tmp;

	while (s[length] != '\0')
	{
		length++;
	}
	start = 0;
	end = length - 1;
	while (start < end)
	{
		tmp = s[start];
		s[start] = s[end];
		s[end] = tmp;
		start++;
		end--;
	}
}
