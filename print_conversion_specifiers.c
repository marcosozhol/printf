#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 *print_string - muestra el numero de caracteres de cadena
 *@arguments: argumentos de la funcion
 *Return: coutn or null
 */
int print_string(va_list arguments)
{
	int i = 0, count = 0;
	char *cadena;

	cadena = va_arg(arguments, char *);

	if (cadena != NULL)
	{
		while (cadena[i] != '\0')
		{
			_putchar(cadena[i]);
			i++;
			count++;
		}
		return (count);
	}
	if (cadena == NULL)
	{
		cadena = "(NULL)";
	}
	return (0);
}

/**
 *print_char - prints a caracter
 *@arguments: argumentos
 *Return: caracter
 */
int print_char(va_list arguments)
{
	char caracter;

	caracter = va_arg(arguments, int);
	return (_putchar(caracter));
}

/**
 *print_int - function that returns the length of the string
 *@arguments: arguments printf function
 *Return: string length
 */
int print_int(va_list arguments)
{
	unsigned int num = 0;
	int c = 1;
	int num2 = 0;

	num = va_arg(arguments, int);
	num2 = num;

	if (num2 < 0)
	{
		_putchar('-');
		num2 = num2 * -1;
		num = num2;
		c += 1;
	}
	while (num > 9)
	{
		num = num / 10;
		c++;
	}
	recursive_int(num2);
	return (c);
}

/**
 *recursive_int - function that prints an int
 *@n: int
 */

void recursive_int(int n)
{
	unsigned int x = 0;

	x = n;

	if (x / 10)
	{
		recursive_int(x / 10);
	}
	_putchar((x % 10) + '0');
}
