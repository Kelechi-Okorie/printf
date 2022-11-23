#ifndef _MAIN_H
#define _MAIN_H

#include <stdlib.h>
#include <stdarg.h>

int _putchar(char c);
int _puts(char *str);
int _printf(const char *format, ...);

/**
 * struct printFunc - A structure of format and associated function
 * @c: format specifer
 * @f: pointer to function for printing @c conversion specifier
 */
typedef struct printFunc
{
	char c;
	int (*f)(va_list ap);
} pf_t;

int print_c(va_list ap);
int print_s(va_list ap);

int (*get_print_func(char s))(va_list ap);

#endif /* _MAIN_H */
