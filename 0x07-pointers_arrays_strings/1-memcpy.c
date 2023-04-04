#include <stdio.h>
#include "main.h"
/**
 * _memcpy - copies  bytes n from memory area
 * @dest: memory area
 * @src: source of  memory area
 * @n: total  bytes to copy
 *
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int j;

	for (j = 0; j < n; j++)
	{
	dest[j] = src[j];
	}
	return (dest);
}

