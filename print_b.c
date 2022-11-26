#include "main.h"

/**
 * print_b - prints number in binary
 * @ap: argument pointer
 * @f: flags for printing
 *
 * Return: number of chars printed
 */
int print_b(va_list ap, flags_t *f)
{
	unsigned int num;
	char *str;

	num = va_arg(ap, unsigned int);
	str = converter(num, 2, 0);
	(void)f;

	return (_puts(str));
}
