#include <stdio.h>
#include "main.h"

/**
 * _puts_recursion - prints strings
 *
 * @s: string to be printed
 * Return: Null
 */

void _puts_recursion(char *s)
{
	if (*s == '\0') /*base */
	{
	putchar('\n');
	return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
	}
