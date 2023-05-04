#include "main.h"

/**
 * print_binary - Prints the binary representation of a number
 *
 * @n: Number to be printed in binary
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask = 1;
	int i;

	/* Find the most significant bit in the number */
	for (i = 0; i < 63; i++)
	{
		if ((mask << 1) > n)
			break;

		mask <<= 1;
	}

	/* Print the binary digits from left to right */
	for (; i >= 0; i--)
	{
		if (n & (mask << i))
			_putchar('1');
		else
			_putchar('0');
	}
}
