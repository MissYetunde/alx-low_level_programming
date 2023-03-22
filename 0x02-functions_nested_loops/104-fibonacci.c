#include <stdio.h>
/**
 * main - prints the first 98 Fibonacci numbers, starting with 1 and 2
 *
 * Return: Always 0.
 */
int main(void)
{
int i, num_digits = 0;
unsigned int fib1 = 1, fib2 = 2, fib3;
printf("%u, %u", fib1, fib2);
for (i = 3; i <= 98; i++)
{
fib3 = fib1 + fib2;
fib1 = fib2;
fib2 = fib3;
int temp = fib2;
while (temp != 0)
{
temp /= 10;
num_digits++;
}
if (i != 98)
printf(", ");
else
num_digits--;
printf("%u", fib2);
while (num_digits < 10)
{
//printf(" ");
num_digits++;
}
num_digits = 0;
}
printf("\n");
return (0);
}
