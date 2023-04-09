#include <stdio.h>
/**
 * main - prints all argument it recieves
 * @argv: argument count
 * @argc: vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	char **arg = argv;
	(void)argc;

	while (*arg)
	{
	printf("%s\n", *arg++);
	}
	return (0);
}
