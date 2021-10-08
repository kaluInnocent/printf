#ifndef MAIN_H
#define MAIN_H

#include<stdlib.h>
#include<stdarg.h>
#include <unistd.h>

/**
* struct formater - a structure definition for type specifiers and functions
* @typ: The operator
* @func: The accompanying function
*/
struct formater
{
	char typ;
	int (*func)(va_list);
};
typedef struct formater type;

int _putchar(char c);
int unsigned_int(va_list list);
int print_char(va_list list);
int print_percent(va_list list);
int print_string(va_list list);
int print_int(va_list list);
int print_number(va_list list);
int print_binary(va_list list);
int print_reverse(va_list arg);
int print_oct(va_list list);
int print_hex(va_list lits);
int print_X(va_list list);
int rot13(va_list list);
int _printf(const char *format, ...);
int parse(const char *format, type f_list[], va_list arg_list);
unsigned int base_len(unsigned int, int);

void putbase(char *str);
int print_unsigned_number(unsigned int);
char *reverse_str(char *str);
#endif
