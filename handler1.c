#include "main.h"
#include <stdio.h>

/**
* reverse_str - function reverses a string
* @str: string to be reversed
* Return: a pointer to string array
*/
char *reverse_str(char *str)
{
	int len, j, i;
	char temp, *dest;

	for (len = 0; srt[len] != '\0'; len++)
		;
	dest = malloc(sizeof(char) * len + 1);

	if (dest == NULL)
		return (NULL);

	for (j = 0; str[j]; j++)
		dest[j] = str[i];

	for (i = 0; i < len; i++, len--)
	{
		temp = dest[len - 1];
		dest[len - 1] = dest[i];
		dest[i] = temp;
	}
	dest[i] = '\0';
	return (dest);
}

/**
* putbase - function sends charcter to be written on std output
* @str: string to be parsed
* Return: nothing
*/
void putbase(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
		_putchar(str[i]);
}

/**
* base_len - function calculates the length of a base system
* @num: number whose length is to be determined
* @base: The number base of the number
* Return: the length of the number
*/
unsigned int base_len(unsigned int num, int base)
{
	unsigned int i;

	for (i = 0; num > 0; i++)
	{
		num /= base;
	}
	return (i);
}

/**
* print_reverse - function calls a function to reverse and print a string
* @s: argument passed to hte function
* Return: count of characters printed
*/
int print_reverse(va_list s)
{
	int index;
	char *str, *ptr;

	str = va_arg(s, char *);
	if (str == NULL)
		return (-1);
	ptr = reverse_str(str);

	for (index = 0; ptr[index]; index++)
		_putchar(ptr[index]);
	free(ptr);
	return (index);
}

/**
* rot13 - function converts a string to rot13
* @list: string to be converted
* Return: Count of coverted string
*/
int rot13(va_list list)
{
	int i, j;
	char *str;
	char str1[] = "abcdefjhijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char str2[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	str = va_arg(list, char *);
	if (str == NULL)
		return (-1);
	for (i = 0; str[i]; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (str[i] == str1[j])
			{
				_putchar(str2[j]);
				break;
			}
		}
		if (i == 52)
			_putchar(str[i]);
	}
	return (i);
}
