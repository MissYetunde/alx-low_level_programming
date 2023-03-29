#include "main.h"
#include "string.h"
/**
 * _strncpy - copies a string
 * @dest: destination string
 * @src: source of string
 * @n: number of bytes to copy
 * Return: Pointer to the resulting string
 */
char *_strncpy(char *dest, char *src, int n)
{
return (strncpy(dest, src, n));
}

