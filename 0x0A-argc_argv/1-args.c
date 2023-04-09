#include <stdio.h>
/**
 * main - prints number of agument passed
 * @argc: prints counts
 * @argv: prints variables
 * Return: 0
 *
 */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
