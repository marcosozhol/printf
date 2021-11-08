#ifndef HEADER
#define HEADER
#include <stdarg.h>

int _printf(const char *format, ...);
int pformat(const char *format, va_list arguments);
int _putchar(char c);
int print_int(va_list arguments);
int print_char(va_list arguments);
int print_string(va_list arguments);
void recursive_int(int n);

/**
 *conversion_specifiers - specifiers
 *@spec: pointer to the specifier conversion
 *@f: function asociated
 */

typedef struct conversion_specifiers
{
	char *spec;
	int (*f)(va_list arguments);
} con_sp;

#endif
