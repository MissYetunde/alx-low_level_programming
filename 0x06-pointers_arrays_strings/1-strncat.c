#include "main.h"
#include "string.h"

/**
 * _strncat - concatenate two strings
 * @dest: The destination value
 * @src: THe source value
 * @n: The limit of the concatenation
 * Return: A pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{

int len = strlen(dest);

int i;
for (i = 0; i < n && src[i] != '\0'; i++)
{
dest[len + i] = src[i];
}
dest[len + i] = '\0';
return (dest);
}
