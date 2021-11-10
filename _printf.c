#include <stdarg.h>
#include <stdio.h>
#include <stddef.h>
#include "main.h"

/**
*_printf - function that prints a string of characters
*@format: character string
*Return: length
*/

int _printf(const char *format, ...)
{
	va_list arguments;
	int length = 0;

	va_start(arguments, format);
	if (!format || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	length = pformat(format, arguments);
	va_end(arguments);
	return (length);
}
