#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_all - prints anything
 * @format: list of types of arguments
 */

void print_all(const char * const format, ...)
{
	va_list args;
	char *str_arg;
	char *separator = "";
	int i = 0, j = 0;

	va_start(args, format);

	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%s%c", separator, va_arg(args, int));
				break;
			case 'i':
				printf("%s%d", separator, va_arg(args, int));
				break;
			case 'f':
				printf("%s%f", separator, va_arg(args, double));
				break;
			case 's':
				str_arg = va_arg(args, char *);
				if (!str_arg)
					str_arg = "(nil)";
				printf("%s%s", separator, str_arg);
				break;
			default:
				j++;
				break;
		}
		if (format[i + 1] != '\0' && j == 0)
			separator = ", ";

		i++;
	}

	va_end(args);
printf("\n");
}
