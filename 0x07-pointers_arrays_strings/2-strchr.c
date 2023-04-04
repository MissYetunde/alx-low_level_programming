#include "main.h"

/**
 * _strchr - locates a character
 *
 * @c: occurrence of the character s
 *
 * @s: in the string c
 *
 * Return: a pointer to the first occurrence of the character c
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
	if (*s != c)
	s++;
	else
	return (s);
	}
	if (c == '\0')
		return (s);
	return ('\0');
}
