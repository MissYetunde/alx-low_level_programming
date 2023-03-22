#include "stdio.h"

/**
 * main - prints the sum of all multiples of 3 0r 5 up 1024
 * Return: success
 */
int main(void)

{
int i, z = 0;

while (i < 1024)
{
if ((i % 3 == 0) || (i % 5 == 0))
{
z += i;
}
i++;
}
printf("%d\n", z);
return (0);
}
