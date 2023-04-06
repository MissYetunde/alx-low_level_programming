#include <stdio.h>
#include "main.h"
/**
 * _pow_recursion - return value of x^y
 * @x: takes exponet of y
 * @y: calculate power of x
 * Return: -1
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	return (-1);
	else if (y == 0)
	{
	return (1);
	}
	else
	{
	return (x * _pow_recursion(x, y - 1));
	}
}
