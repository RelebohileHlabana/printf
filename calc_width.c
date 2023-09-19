#include "main.h"
#include <ctype.h>

/**
 * width_calc - Calculate the width for printing
 * @format: Formatted string used to print the arguments.
 * @j: List of arguments to be printed.
 * @list: List of arguments.
 ** Return: Width.
 */
int width_calc(const char *format, int *j, va_list list)
{
	int calc_a = *j + 1;
	int width = 0;

	while (format[calc_a] != '\0')
	{
		if (isdigit(format[calc_a]))
		{
			width *= 10;
			width += format[calc_a] - '0';
			calc_a++;
		}
		else if (format[calc_a] == '*')
		{
			calc_a++;
			width = va_arg(list, int);
			break;
		}
		else
		{
			break;
		}
	}

	*j = calc_a - 1;

	return (width);
}
