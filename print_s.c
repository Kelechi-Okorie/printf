#include "main.h"

/**
 * print_s - prints a string tot he std
 * @ap: argument pointer
 *
 * Return: number of str
 */
int print_s(va_list ap)
{
	char *s = va_arg(ap, char *);

	if (!s)
		s = "(null)";

	return (_puts(s));
}
