#include "main.h"

/**
 * print_hex - prints a number in lowercase hexadecimal
 * @ap: argument pointer
 *
 * Return: number of chars printed
 */
int print_hex(va_list ap)
{
	unsigned int num;
	char *str;
	int count;

	num = va_arg(ap, unsigned int);
	str = converter(num, 16, 1);
	count = 0;

	count += _puts(str);

	return (count);
}

/**
 * print_hex_big - prints a number in uppercase hexadecimal
 * @ap: argument pointer
 *
 * Return: numbers of chars printed
 */
int print_hex_big(va_list ap)
{
	unsigned int num;
	char *str;
	int count;

	num = va_arg(ap, unsigned int);
	str = converter(num, 16, 0);
	count = 0;

	count += _puts(str);

	return (count);
}

/**
 * print_octal - prints number in octal base
 * @ap: argument pointer
 *
 * Return: number of chars printed
 */
int print_octal(va_list ap)
{
	unsigned int num;
	char *str;
	int count;

	num = va_arg(ap, unsigned int);
	str = converter(num, 8, 0);
	count = 0;

	count += _puts(str);

	return (count);
}
