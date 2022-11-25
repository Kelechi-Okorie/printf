#include "main.h"

/**
 * converter - converts number in base into string
 * @num: number to convert
 * @base: base of the number
 * @lowercase: flag to indicate is hex is lower or upper
 *
 * REturn: result string to return
 */
char *converter(unsigned long int num, int base, int lowercase)
{
	static char *str;
	static char buf[50];
	char *ptr;

	str = (lowercase)
		? "0123456789abcdef"
		: "0123456789ABCDEF";

	ptr = &buf[49];
	*ptr = '\0';

	do {
		*--ptr = str[num % base];
		num /= base;
	} while (num != 0);

	return (ptr);
}
