#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space
 * @str: the string to copy
 *
 * Return: NULL
 */
char *_strdup(char *str)
{
	unsigned int i;
	char *new_str;
	unsigned int n;

	if (str == NULL)
	return (NULL);
	i = 0;
	while (str[i])
	i++;
	new_str = malloc((i + 1) * sizeof(char));
	if (new_str == NULL)
	return (NULL);
	for (n = 0; n <= i; n++)
	new_str[n] = str[n];
	return (new_str);
}
