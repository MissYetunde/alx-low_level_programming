#include <stdio.h>
#include "main.h"
/**
 *  _strlen_recursion - returns the length of string
 * @s: pointer to string
 * Return: null
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')/* check if its the end of string*/
	{
	return (0);/* return this string is empty*/
	}
	else
{
	return 1 + _strlen_recursion(s + 1);
}
}
