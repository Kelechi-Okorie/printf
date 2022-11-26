#include "main.h"

/**
 * print_c - prints a char to stdout
 * @ap: argument pointer from _printf function
 * @f: flags for printing
 *
 * Return: number of chars printed
 */
int print_c(va_list ap, flags_t *f)
{
	_putchar(va_arg(ap, int));

	(void)f;

	return (1);
}
