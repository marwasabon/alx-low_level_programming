#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_strings - print strings
 * @separator: seperates strings
 * @n: no of strings
 **/

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	const char *c;
	va_list ap;

	va_start(ap, n);

	c = separator;

	separator = c;

	for (i = 0; i < n; i++)
	{
		const char *arg = va_arg(ap, const char *);


		if (separator != NULL && i > 0)
			printf("%s", separator);

		printf("%s", arg == NULL ? "(nil)" : arg);

	}
	va_end(ap);
	printf("\n");
}
