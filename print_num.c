#include "main.h"

void print_num(int num);
int count_digits(int num);

/**
 * print_signed - prints integers for format d and i
 * @ap: argument pointer
 * @f: flags for printing
 *
 * Return: number of chars printed
 */
int print_signed(va_list ap, flags_t *f)
{
	int num;
	int count;

	num = va_arg(ap, int);
	count = count_digits(num);

	if (f->space == 1 && f->plus == 0 && num >= 0)
		count  += _putchar(' ');
	if (f->plus == 1 && num >= 0)
		count += _putchar('+');

	if (num <= 0)
		count++;

	print_num(num);
	return (count);
}

/**
 * print_unsigned - prints an unsigned integer
 * @ap: argument pointer
 * @f: flags for printing
 *
 * Return: number of chars printed
 */
int print_unsigned(va_list ap, flags_t *f)
{
	unsigned int num = va_arg(ap, unsigned int);
	char *str = converter(num, 10, 0);

	(void)f;

	return (_puts(str));
}

/**
 * count_digits - counts the number of digits in an integer
 * @num: integer to count
 *
 * Return: number of digits in integer @num
 */
int count_digits(int num)
{
	unsigned int count;
	unsigned int n;

	count = 0;
	if (num < 0)
		n = num * -1;
	else
		n = num;

	while (n != 0)
	{
		n /= 10;
		count++;
	}

	return (count);
}

/**
 * print_num - prints a given number
 * @num: the number to print
 *
 * Return: Always void;
 */
void print_num(int num)
{
	unsigned int n;

	if (num < 0)
	{
		_putchar('-');
		n = -num;
	}
	else
	{
		n = num;
	}

	if (n / 10)
		print_num(n / 10);

	_putchar((n % 10) + '0');
}
