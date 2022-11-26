#include "main.h"

/**
 * print_p - prints input as an address
 * @ap: argument pointer
 *
 * Return: number of chars printed
 */
int print_p(va_list ap)
{
	unsigned long int num;
	char *str;
	int count;

	num = va_arg(ap,  unsigned long int);
	count = 0;

	if (!num)
		return (_puts("(nil)"));

	str = converter(num, 16, 1);
	count += _puts("0x");
	count += _puts(str);

	return (count);
}
