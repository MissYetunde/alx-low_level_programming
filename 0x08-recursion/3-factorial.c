#include <stdio.h>
#include "main.h"
/**
 * factorial - prints factorial
 * @n : string
 * Return: -1
 */

int factorial(int n)
{
	if (n < 0)
	{
	return (-1);
	}
	else if (n == 0)
		return (1);
	{
	return (n * factorial(n - 1));
	}
}
