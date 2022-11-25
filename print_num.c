#include "main.h"

void print_num(int num);
int count_digits(int num);

/**
 * print_signed - prints integers for format d and i
 * @ap: argument pointer
 *
 * Return: number of chars printed
 */
int print_signed(va_list ap)
{
	int num;
	int count;

	num = va_arg(ap, int);
	count = count_digits(num);

	if (num <= 0)
		count++;

	print_num(num);
	return (count);
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
		n = num;

	if (n / 10)
		print_num(n / 10);

	_putchar((n % 10) + '0');
}
