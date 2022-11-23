#include "main.h"

/**
 * digit_counter - counts digits
 * @a: the integer to be counted
 *
 * Return: count
 */
int digit_counter(int a)
{
	int count;
	
	count = 0;
	while (a != 0)
	{
		a = a / 10;
		count ++;
	}
	return (count);
}

/**
 * _printnum - prints number
 * @a: number to be printed
 *
 * Return: Always 0 (Success)
 */
int _printnum(int a)
{
	int len;

       	len = digit_counter(a);

	if (a < 0)
	{
		_putchar('-');
	}
	a = abs(a);	
	while (len > 1 && a != 0) 
	{
		_putchar(a / 10 + '0');
		a = a % 10;
		len--;
	}
	_putchar(a % 10 + '0');

	return (0);
}

/**
 * print_num - prints signed numbers
 *
 * @ap: argument pointer
 * Return: numlen
 */
int print_num(va_list ap) 
{
	int num;
	int numlen;
	
	num = va_arg(ap, int);
	numlen = digit_counter(num);
	_printnum(num);

	return (numlen);
}
