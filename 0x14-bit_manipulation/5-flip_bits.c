#include "main.h"

/**
 * flip_bits - Return number of bits to flip
 * get from one number toanother
 *
 * @n: First number
 * @m: Second number
 *
 * Return: Number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	unsigned long int flip  = n ^ m;

	while (flip != 0)
	{
		count += (flip & 1);
		flip >>= 1;
	}

	return (count);
}
