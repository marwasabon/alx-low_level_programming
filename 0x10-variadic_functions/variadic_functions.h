#ifndef STDARG_H
#define STDARG_H
#include <stdarg.h>
#endif

#ifndef _VARIDIC_H_
#define _VARIDIC_H_

typedef struct print_ops
{
	char *op;
	void (*f)(va_list);
} p_op;
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void pr_int(va_list);
void pr_char(va_list);
void pr_float(va_list);
void pr_str(va_list);

#endif
