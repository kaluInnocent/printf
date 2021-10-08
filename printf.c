#include "main.h"
#include <stdarg.h>
/**
* _printf - function prints a formatted string
* @format: a string containing character specifiers
* Return: count of the characters printed to std output
*/
int _printf(const char *format, ...)
{
	int print;
	type f_list[] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_percent},
		{"d", print_int},
		{"i", print_int},
		{"b", print_binary},
		{"r", print_reverse},
		{"R", rot13},
		{"u", unsigned_integer},
		{"o", print_oct},
		{"x", print_hex},
		{"X", print_X},
		{NULL, NULL}
	};
	va_list arg_list;

	if (format == NULL)
		return (-1);
	va_start(arg_list, format);
	print = parse(format, f_list, arg_list);
	va_end(arg_list);
	return (print);
}
