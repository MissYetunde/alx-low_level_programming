#include <stdio.h>

/**
 * _memset - function fills the first n
 * bytes of the memory area
 *
 * @b: byte value that fill the area of memory
 * @s: points to area of memory to be filled
 * @n: number of bytes that will fill
 *
 * Return: points to the memory s
 */

char *_memset(char *s, char b, unsigned int n)
{
unsigned int j;

	for (j = 0; j < n; j++)
	{
		s[j] = b;
	}
	return (s);
}
