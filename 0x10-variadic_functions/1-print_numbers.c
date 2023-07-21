#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_numbers - dog object
 * @separator: name of dog
 * @n: numbers
 **/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	const char *c;
	va_list ap;

	va_start(ap, n);

	c = separator;

	separator = c;

	for (i = 0; i < n; i++)
	{
		if  (separator == NULL)
		printf("%d", va_arg(ap, int));
		else  if (i != n - 1)
		printf("%s", separator);
	}
	va_end(ap);
	printf("\n");
}
