#include "main.h"

/**
 * print_p - prints input as an address
 * @ap: argument pointer
 * @f: flags for printing
 *
 * Return: number of chars printed
 */
int print_p(va_list ap, flags_t *f)
{
	unsigned long int num;
	char *str;
	int count;

	num = va_arg(ap,  unsigned long int);
	count = 0;

	(void)f;

	if (!num)
		return (_puts("(nil)"));

	str = converter(num, 16, 1);
	count += _puts("0x");
	count += _puts(str);

	return (count);
}
