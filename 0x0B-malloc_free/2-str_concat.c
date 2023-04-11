#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string to concatenate
 * @s2: second string to concatenate
 *
 * Return: NUll orvpoints to concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	char *concat_str;
	int num1, num2, a, b;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	num1 = 0;
	while (s1[num1])
	num1++;
	num2 = 0;
	while (s2[num2])
	num2++;
	concat_str = malloc((num1 + num2 + 1) * sizeof(char));
	if (concat_str == NULL)
	return (NULL);
	for (a = 0; a < num1; a++)
	concat_str[a] = s1[a];
	for (b = 0; b <= num2; b++)
	concat_str[a + b] = s2[b];
	return (concat_str);
}
