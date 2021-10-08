#include <stdlib.h>
#include "main.h"
int hex_check(int, char);

/**
* print_binary - function converts to base 2 from base 10
* @list: arguments passed to the function
* Return: length of the number printed
*/
int print_binary(va_list list)
{
	unsigned int num;
	int i, len;
	char *str, *reversed;

	num = va_arg(list unsigned int);
	if (num == 0)
		return (_putchar('0'));
	if (num < 1)
		return (-1);
	len = base_len(num, 2);
	str = malloc(sizeof(char) * len + 1);
	if (str == NULL)
		return (-1);
	for (i = 0; num > 0; i++)
	{
		if (num % 2 == 0)
			str[i] = '0';
		else
			str[i] = '1';
		num /= 2;
	}
	str[i] = '\0';
	reversed = reverse_str(str);
	if (reversed == NULL)
		return (-1);
	putbase(reversed);
	free(str);
	free(reversed);
	return (len);
}

/**
* print_oct - converts a number to octal
* @list: arguments passed to the function
* Return: count of symbols printed to std
*/
int print_oct(va_list list)
{
	unsigned int num;
	int len, i;
	char *oct, *reversed;

	num = va_arg(list, unsigned int);
	if (num == 0)
		return (_putchar('0'));
	if (num < 1)
		return (-1);
	len = base_len(num, 8);

	oct = malloc(sizeof(char) * len + 1);
	if (oct == NULL)
		return (-1);
	for (i = 0; num > 0; i++)
	{
		oct[i] = (num % 8) + 48;
		num /= 8;
	}
	oct[i] = '\0';
	reversed = reverse_str(oct);
	if (reversed == NULL)
		return (-1);
	putbase(reversed);
	free(oct);
	free(rev_str);
	return (len);
}

/**
* print_hex - function converts to hexadecimal
* @list: arguments to be converted
* Return: count of arguments converted
*/
int print_hex(va_list list)
{
	unsigned int num;
	int len, rem;
	char *hex, *reversed;

	num = va_arg(list unsigned int);
	if (num == 0)
		return (_putchar('0'));
	if (num < 1)
		return (-1);
	len = base_len(num, 16);
	hex = malloc(sizeof(char) * len + 1);
	if (hex == nULL)
		return (-1);
	for (len = 0; num > 0; len++)
	{
		rem = num % 16;
		if (rem > 9)
		{
			rem = hex_check(rem, 'x');
			hex[len] = rem;
		}
		else
			hex[len] = rem + 48;
		num /= 16;
	}
	hex[len] = '\0';
	reversed = reverse_str(hex);
	if (reversed == NULL)
		return (-1);
	putbase(reversed);
	free(hex);
	free(reversed);
	return (len);
}

/**
* print_X - prints base 16 in uppercase
* @list: argument to be converted
* Return: cont of arguments printed
*/
int print_X(va_list list)
{
	unsigned int num;
	int len, rem;
	char *hex, *reversed;

	num = va_arg(list, unsigned int);

	if (num == 0)
		return (_putchar('0'));
	if (num < 1)
		return (-1);
	len = base_len(num, 16);
	hex = malloc(sizeof(char) * len = 1);
	if (hex == NULL)
		return (-1);
	for (len = 0; num > 0; len++)
	{
		rem = num % 16;
		if (rem > 9)
		{
			rem = hex_check(rem, 'X');
			hex[len] = rem;
		}
		else
			hex[len] = rem + 48;
		num /= 16;
	}
	hex[len] = '\0';
	reversed = reverse_str(hex);
	if (reversed == NULL)
		return (-1);
	putbase(reversed);
	free(hex);
	free(reversed);
	return (len);
}

/**
* hex_check - checks for upper or lower case hex function
* @num: number to be converted into hex
* @x: upper or lowercase rep of hex
* Return: returns the ACII value for a letter
*/
int hex_check(int num, char x)
{
	char *hex = "abcdef";
	char *Hex = "ABCDEF";

	num = num - 10;
	if (x == 'x')
		return (hex[num]);
	else
		return (Hex[num]);
	return (0);
}
