#include <stdarg.h>
#include <stddef.h>
#include <string.h>
#include "main.h"
#include <stdio.h>

/**
 *pformat - function that prints the format
 *@arguments: function printf variadic arguments
 *@format: string character
 *Return: the length of the format
 */

int pformat(const char *format, va_list arguments)
{
	int n = 0;
	char ch = 0;
	int i = 0;
	con_sp identifiers[] = {
		{"c", print_char},
		{"s", print_string},
		{"d", print_int},
		{"i", print_int}
	};


	while (format[n])
	{
		if (format[n] == '%')
		{
			if (format[n + 1] == '\0')
			{
				return (-1);
			}
			if (format[n + 1] == *identifiers->spec)
			{
				ch = ch + identifiers[i].f(arguments);
			}
		}
		n++;
	}
	return (ch);
}
