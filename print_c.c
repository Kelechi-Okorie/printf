#include "main.h"

/**
 * print_c - prints a char to stdout
 * @ap: argument pointer from _printf function
 *
 * Return: number of chars printed
 */
int print_c(va_list ap)
{
	_putchar(va_arg(ap, int));

	return (1);
}
