#include "holberton.h"
#include <stdlib.h>

/**
 * conversion_specifiers - Looks for a specifier
 * @format: Format specifier
 *
 * Return: pointer to valid function or NULL
 */
static int (*conversion_specifiers(const char *format))(va_list)
{
	unsigned int i;
	mystruct specifiers[] = {
		{"c", print_c},
		{"s", print_s},
		{"i", print_i},
		{"d", print_d},
		{"u", print_u},
		{"b", print_b},
		{"o", print_o},
		{"x", print_x},
		{"X", print_X},
		{"p", print_p},
		{"S", print_S},
		{"r", print_r},
		{"R", print_R},
		{NULL, NULL}
	};

	for (i = 0; specifiers[i].type != NULL; i++)
	{
		if (*(specifier[i].type) == *format)
		{
			break;
		}
	}
	return (specifier[i].ptr);
}

/**
 * _printf - Main function for printf
 * @format: Format to print the data
 *
 * Return: The numbers of characters printed except null byte
 */
int _printf(const char *format, ...)
{
	unsigned int i = 0
	unsigned int contador = 0;
	va_list mylist;
	int (*ptr)(va_list);

	if (format == NULL)
		return (-1);

	va_start(mylist, format);
	while (*format)
	{
		while (format[i] != '%' && format[i] != '\0')
		{
			_putchar(format[i]);
			i++;
			contador++;
		}
		if (!(*format))
			return (contador);
		ptr = conversion_specifiers(&format[i + 1]);
		if (f != NULL)
		{
			contador += f(mylist);
			i += 2;
			continue;
		}
		if (!format[i + 1])
			return (-1);

		_putchar(format[i]);
		contador++;
		if (format[i + 1] == '%')
			i += 2;
		else
			i++;
	}
	va_end(mylist);
	return (contador);
}
