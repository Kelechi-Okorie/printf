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
	int n;
	char buf[50];

	num = va_arg(ap, unsigned int);
	n = 49;
	buf[n] = '\0';

	while (num != 0)
	{
		buf[--n] = (num % 2) + '0';
		num /= 2;
	}

	return (_puts(&buf[n]));
}
