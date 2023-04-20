#include  <stdio.h>
#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: the name to print
 * @f: a pointer to a function that takes
 * a char pointer argument and returns void
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
