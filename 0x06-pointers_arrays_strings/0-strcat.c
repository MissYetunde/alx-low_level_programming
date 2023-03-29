#include "string.h"
#include "main.h"

/**
 * *_strcat - concatenates two strings.
 * @src: string to be appended
 * @dest: string to be appended to
 * Return: a pointer of the resulting string
 */
char *_strcat(char *dest, char *src)

{
strcat(dest, src);
return (dest);
}
