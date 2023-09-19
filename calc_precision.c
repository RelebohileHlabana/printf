#include "main.h"
#include <ctype.h>

/**
 * precision_calc - Calculates the precision for printing
 * @format: Formatted string to print the arguments.
 * @j: Arguments to be printed.
 * @list: List of arguments.
 * Return: Precision.
 */
int precision_calc(const char *format, int *j, va_list list)
{
	int calc_a = *j + 1;
	int precision = -1;

	if (format[calc_a] != '.')
		return (precision);

	precision = 0;

	for (calc_a += 1; format[calc_a] != '\0'; calc_a++)
	{
		if (isdigit(format[calc_a]))
		{
			precision *= 10;
			precision += format[calc_a] - '0';
		}
		else if (format[calc_a] == '*')
		{
			calc_a++;
			precision = va_arg(list, int);
			break;
		}
		else
		{
			break;
		}
	}

	*j = calc_a - 1;

	return (precision);
}
