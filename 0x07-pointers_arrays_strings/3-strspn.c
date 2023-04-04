#include <stdio.h>
#include "main.h"
/**
 * _strspn - Gets length of a prefix.
 * @s: Points to the string to be search.
 * @accept: contains character accepted from the substring.
 *
 * Return: the number of bytes in the initial segment of s.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int len = 0;
	int x, y;

	for (x = 0; s[x]; x++)
	{
		for (y = 0; accept[y]; y++)
		{
			if (s[x] == accept[y])
			{
				len++;
				break;
			}
		}
		if (!accept[y])
			break;
	}
	return (len);
}
