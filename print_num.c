#include "main.h"

/**
 * unsigned_number - prints numbers
 * @number: number to be printed
 *
 * Return: Always 0 (Success)
 */
int unsigned_number(int number)
{
	int i;
	int digit;

	if (number > 10)
	{
		for (i = 0; i < 32 && number / 10 != 0; i++)
		{
			digit = number / 10;
			_putchar(digit + '0');
			number %= 10;
		}
		_putchar(number % 10 + '0');
	}
	return (0);
}

/**
 * signed_number - prints signed numbers
 * @number: number to be printed
 *
 * Return: Always 0 (Success)
 */
int signed_number(int number)
{
	if (number < 0)
	{
		_putchar('-');
	}
	unsigned_number(number);
	return (0);
}

/**
 * print_num - prints given numbers
 * @ap: argument pointer
 *
 * Return: number
 */
int print_num(va_list ap)
{
	int num;
	int number;

	num = va_arg(ap, int);

	number = unsigned_number(num);

	
	return (number);
}

