#include "main.h"

/**
 * print_b - prints number in binary
 * @ap: argument pointer
 *
 * Return: number of chars printed
 */
int print_b(va_list ap)
{
	unsigned int num;
	char *str;

	num = va_arg(ap, unsigned int);
	str = converter(num, 2, 0);


	return (_puts(str));
}
