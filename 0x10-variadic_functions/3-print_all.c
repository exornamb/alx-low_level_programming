#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdbool.h>
/**
 * print_all - Function that prints anything
 * @format: This is the format to print a value*
*/
void print_all(const char * const format, ...)
{
	va_list res;
	char *str;
	int i;

	i = 0;
	va_start(res, format);
	while (format != NULL && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'i':
				printf("%i", va_arg(res, int));
				break;
			case 'f':
				printf("%f", va_arg(res, double));
				break;
			case 'c':
				printf("%c", (char) va_arg(res, int));
				break;
			case 's':
				str = va_arg(res, char *);
				if (str == NULL)
				{
					printf("(nil)");
					break;
				}
				printf("%s", str);
				break;
		}
		if ((format[i] == 'c' || format[i] == 'i' || format[i] == 'f' ||
		format[i] == 's') && format[(i + 1)] != '\0')
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(res);
}
