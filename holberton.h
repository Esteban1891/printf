#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_

#include <stdarg.h>
#include <limits.h>
#include <stdlib.h>
/**
 * struct print - Type identifier for printing
 * @type: type to print
 * @ptr: function to check for print
 */
typedef struct print
{
	char *type;
	int (*ptr)(va_list);
} mystruct;

int _putchar(char c);
int _printf(const char *format, ...);
int print_c(va_list c);
int print_s(va_list s);
int print_i(va_list i);
int print_d(va_list d);
int print_u(va_list u);
int print_b(va_list b);
int print_o(va_list o);
int print_x(va_list x);
int print_X(va_list X);
int print_p(va_list p);
int print_S(va_list S);
int print_r(va_list r);
int print_R(va_list R);

#endif
