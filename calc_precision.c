#include "main.h"

/**
 * precision_get - Calculates the precision for printing
 * @our_format: Formatted string to print the arguments.
 * @j: Arguments to be printed.
 * @list: List of arguments.
 * Return: Precision.
 */
int precision_get(const char *our_format, int *j, va_list list)
{
	int curs_i = *j + 1;
	int precision = -1;

	if (our_format[curs_i] != '.')
		return (precisio);

	precision = 0;

	curs_i += 1;

	while (our_format[curs_i] != '\0')
	{
		if (is_digit(our_format[curs_i]))
		{
			precision *= 10;
			precision += our_format[curs_i] - '0';
			curs_i++;
		}
		else if (our_format[curs_i] == '*')
		{
			curs_i++;
			precision = va_arg(list, int);
			break;
		}
		else
		{
			break;
		}
	}

	*j = curs_i - 1;

	return (precision);
}
