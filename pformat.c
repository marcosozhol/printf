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
	unsigned int n = 0;
	int elem = 0;
	int length = 0;

	con_sp identifiers[] = {
		{"c", print_char},
		{"s", print_string},
		{"d", print_int},
		{"i", print_int},
		{NULL, NULL}
	};

	int size = ((sizeof(identifiers)) / (sizeof(con_sp) - 1));

	while (format && format[n])
	{
		elem = 0;
		if (format[n] == '%' && format[n + 1])
		{
			while (elem < size)
			{
				if (format[n + 1] == *identifiers[elem].spec)
				{
					identifiers[elem].f(arguments);
					length++;
					break;
				}
				elem++;
			}
			n++;
		}
		else
		{
			_putchar(format[n]);
			length++;
		}
		n++;
	}
	return (length);
}
