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

		/*if (cadena == NULL)*/
			/*cadena = "null"*/
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
	int num = va_arg(arguments, int);
	int c = 0;

	if (num < 0)
	{
		num = num * -1;
		_putchar('-');
		c += 1;
	}
	if (num > 9)
	{
		while (num > 9)
		{
		c++;
		}
	}
	recursive_int(num);
	return (c);
}

/**
 *recursive_int - function that prints an int
 *@n: int
 */

void recursive_int(int n)
{
	int x = n;

	if (x / 10)
	{
		recursive_int(x / 10);
	}
	_putchar(x % 10);
}
