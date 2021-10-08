#include<main.h>
/**
* print_int: function prints an integer
* @list: listof arguments to be printed
* Return: returns the amount of characters printed
*/
int print_int(va_list list)
{
	int num_len;

	num_len = print_number(list);
	return (num_len);
}

/**
* print_string - function prints a string
* @list: number of arguments to be printed
* Return: returns number of arguments printed
*/
int print_string(va_list list)
{
	int i;
	char *str;

	str = va_arg(list, char*);
	if (str == NULL)
		str = "(null)";
	for (i = 0; str[i]; i++)
		_putchar(str[i]);
	return (i);
}

/**
* print_percent - function prints a percent symbol
* @list: list of arguments to be printed
* Return: returns the count of characters printed
*/
int print_percent(__attribute__((unused))va_list list)
{
	_putchar('%');
	return (1);
}

/**
* print_char - function prints a character
* @list: list of characters to be printed
* Return: returns the count of characters printed
*/
int print_char(va_list list)
{
	_putchar(va_arg(list, int));
	return (1);
}

/**
* unsigned_int - function prints unsigned integers
* @list: list of arguements to be printed
* Return: count of unsigned integers printed
*/
int unsigned_int(va_list list)
{
	unsigned int number;

	number = va_arg(list, unsigned int);

	if (number == 0)
		return (print_unsigned_number(number));
	if (number < 1)
		return (-1);
	return (print_unsigned_number(number));
}
