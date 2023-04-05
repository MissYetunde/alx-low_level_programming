#include <stdio.h>
#include "main.h"
/**
 * _print_rev_recursion - prints the reverse string
 * @s: points to the string
 * Return: 0
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')/* keeps printing till null */
	{/* ends the string */
	}
	else/* prints string if it not null */
	{
	_print_rev_recursion(s + 1);
	_putchar(*s);
	}
}
