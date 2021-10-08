#include "main.h"
/**
* print_number - function prints a number passed to it as argument
* @list: list of numbers passed as argument
* Return: returns the number of arguments passed
*/
int print_number(va_list list)
{
	unsigned int num = va_arg(list, int);
	int len = 0, div = 1;

	if (num < 0)
	{
		len += _putchar('-');
		num *= -1;
	}
	for (; num / div > 9;)
		div *= 10;
	for (; div != 0;)
	{
		len += _putchar('0' + num / div);
		num %= div;
		div /= 10;
	}
	return (len);
}

/**
* print_unsigned_number - fucntion prints an unsigned number
* @n: unsigned integer to be printed
* Return: count of numbers printed
*/
int print_unsigned_number(unsigned int n)
{
	int div = 1, len = 0;
	unsigned int num;

	for (; num / div > 9;)
		div *= 10;
	for (; div != 0;)
	{
		len += _putchar('0' + num / div);
		num %= div;
		div /= 10;
	}
	return (len);
}
