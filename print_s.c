#include "main.h"

/**
 * print_s - prints a string tot he std
 * @ap: argument pointer
 * @f: flags for printing
 *
 * Return: number of str
 */
int print_s(va_list ap, flags_t *f)
{
	char *s = va_arg(ap, char *);

	(void)f;

	if (!s)
		s = "(null)";

	return (_puts(s));
}
