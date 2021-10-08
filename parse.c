#include "main.h"
/**
* parse - function recives parameters to print a string
* @format: a of characters
* @f_list: list of all possible handler functions
* @arg: list of all arguments passed passed to the program
* Return: count of characters printed
*/
int parse(const char *format, type f_list, va_list arg)
{
	int i, j, val, printed = 0;

	for (i = 0; format[i]; i++)
	{
		if (format[i] == '%')
		{
			for (j = 0; f_list[j].typ != NULL; j++)
			{
				if (format[i + 1] == f_list[j].typ[0])
				{
					val = f_list[j].func(arg);
					if (val == -1)
						return (-1);
					printed  += val;
					break;
				}
			}
			if (f_list[j].typ == NULL && format[i + 1] != ' ')
			{
				if (format[i + 1] != '\0')
				{
					_putchar(format[i]);
					_putchar(format[i + 1]);
					printed += 2;
				}
				else
					return (-1);
			}
			i++;
		}
		else
		{
			_putchar(format[i]);
			printed++;
		}
	}
	return (printed);
}
