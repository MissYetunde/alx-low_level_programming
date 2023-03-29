#include <stdio.h>

/**
 * string_toupper - Changes all lowercase letters of a string to uppercase.
 *
 * @s: The string to be converted.
 *
 * Return: A pointer to the resulting string.
 */
char *string_toupper(char *s)
{
	int y;

	for (y = 0; s[y] != '\0'; y++)
{
	if (s[y] >= 'a' && s[y] <= 'z')
{
	s[y] -= 32; /*ascii value -32 */
	}
	}
return (s);
}
