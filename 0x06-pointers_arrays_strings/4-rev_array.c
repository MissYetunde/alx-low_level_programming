#include "main.h"
#include <stdio.h>

/**
 * reverse_array - Reverses the content of an array of integers.
 *
 * @a: Pointer to the first element of the array to be reversed.
 * @n: The number of elements in the array.
 *
 * Return: Nothing (void).
 */
void reverse_array(int *a, int n)
{
int i, rev;

for (i = 0; i < n / 2; i++)
{
rev = a[i];
a[i] = a[n - i - 1];
a[n - i - 1] = rev;
}
}
