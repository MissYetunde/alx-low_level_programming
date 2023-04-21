#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the opcodes of its own main function
 * @argc: the number of command-line arguments
 * @argv: an array of pointers to the arguments
 *
 * Return: 0 if successful, 1 if the number of arguments is incorrect,
 *         2 if the number of bytes is negative
 */
int main(int argc, char *argv[])
{
	unsigned char *p;
	int i, n;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	n = atoi(argv[1]);
	if (n < 0)
	{
		printf("Error\n");
		return (2);
	}

	p = (unsigned char *)main;
	for (i = 0; i < n; i++)
	{
		printf("%02x", *(p + i));
		if (i == n - 1)
			printf("\n");
		else
			printf(" ");
	}

	return (0);
}
