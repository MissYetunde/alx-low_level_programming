#include <stdio.h>
#include "main.h"

/**
 * _strstr - locates a substring
 *
 * @haystack: the longer string to searched
 * @needle: the first occurrence of the substring
 *
 * Return: points begginning of substring or @Null is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int x = 0, y = 0;

	while (haystack[x])
	{
	while (needle[y] && (haystack[x] == needle[0]))
		{
		if (haystack[x + y] == needle[y])
		y++;
		else
		break;
		}
		if (needle[y] == '\0')
		return (haystack + x);
		x++;
			y = 0;
		}
	return (NULL);
}
