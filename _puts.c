#include "main.h"

/**
 * _puts - write the string @str to the stdout
 * @str: char pointer to the string to be written
 *
 * Return: number of chars printed
 */
int _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);

	return (i);
}
