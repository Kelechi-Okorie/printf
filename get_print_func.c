#include "main.h"

/**
 * get_print_func - returns appropriate printing function
 * @s: conversion specifier character
 * Description: Given a conversion specifier @s, this
 * function returns pointer to the appropriate function
 * to print that type
 *
 * Return: pointer to the appropriate print function
 */
int (*get_print_func(char s))(va_list, flags_t *)
{
	pf_t funcs[] = {
		{'c', print_c},
		{'s', print_s},
		{'d', print_signed},
		{'i', print_signed},
		{'b', print_b},
		{'u', print_unsigned},
		{'o', print_octal},
		{'x', print_hex},
		{'X', print_hex_big},
		{'p', print_p},
		{'\0', NULL}
	};

	int i;

	i = 0;
	while (funcs[i].c != '\0')
	{
		if (funcs[i].c == s)
			return (funcs[i].f);
		i++;
	}

	return (NULL);
}
