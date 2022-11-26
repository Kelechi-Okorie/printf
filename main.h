#ifndef _MAIN_H
#define _MAIN_H

#include <stdlib.h>
#include <stdarg.h>

int _putchar(char c);
int _puts(char *str);
int _printf(const char *format, ...);
char *converter(unsigned long int num, int base, int lowercase);

/**
 * struct flags - struct for _printf flags
 * @plus: flag for '+'
 * @space: flag for ' ';
 * @hash: flag for '#'
 */
typedef struct flags
{
	int plus;
	int space;
	int hash;
} flags_t;

/**
 * struct printFunc - A structure of format and associated function
 * @c: format specifer
 * @f: pointer to function for printing @c conversion specifier
 */
typedef struct printFunc
{
	char c;
	int (*f)(va_list ap, flags_t *f);
} pf_t;

int print_c(va_list ap, flags_t *f);
int print_s(va_list ap, flags_t *f);
int print_signed(va_list ap, flags_t *f);
int print_b(va_list ap, flags_t *f);
int print_unsigned(va_list ap, flags_t *f);
int print_hex(va_list ap, flags_t *f);
int print_hex_big(va_list ap, flags_t *f);
int print_octal(va_list ap, flags_t *f);
int print_p(va_list ap, flags_t *f);

int (*get_print_func(char s))(va_list ap, flags_t *f);
int get_flag(char s, flags_t *f);

#endif /* _MAIN_H */
