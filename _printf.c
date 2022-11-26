#include "main.h"

/**
 * _printf - produces output accordint to @format
 * @format: format specifier use to parse the remaining input
 *
 * Return: the number of characters printed excluding null byte
 */
int _printf(const char *format, ...)
{
	int count;
	va_list ap;
	int (*print_func)(va_list, flags_t *f);
	flags_t flags = {0, 0, 0};

	count = 0;
	va_start(ap, format);

	if (!format)
		return (-1);

	for (; *format != '\0'; format++)
	{
		if (*format != '%')
		{
			count += _putchar(*format);
			continue;
		}
		format++;
		if (!(*format))
			return (-1);
		if (*format == '%')
		{
			count += _putchar('%');
			continue;
		}
		while (get_flag(*format, &flags))
			format++;
		print_func = get_print_func(*format);
		count += (print_func)
			? print_func(ap, &flags)
			: _printf("%%%c", *format);
	}

	_putchar(-1);
	va_end(ap);
	return (count);
}
