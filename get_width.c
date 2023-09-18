#include "main.h"

/**
 * find_width - Calculate the width for printing
 * @our_format: Formatted string used to print the arguments.
 * @j: List of arguments to be printed.
 * @list: List of arguments.
 *
 * Return: Width.
 */
int find_width(const char *our_format, int *j, va_list list)
{
	int curs_i = *j + 1;
	int width = 0;

	while (our_format[curs_i] != '\0')
	{
		if (is_digit(our_format[curs_i]))
		{
			width *= 10;
			width += our_format[curs_i] - '0';
			curs_i++;
		}
		else if (our_format[curs_i] == '*')
		{
			curs_i++;
			width = va_arg(list, int);
			break;
		}
		else
		{
			break;
		}
	}
	*j = curs_i - 1;

	return (width);
}

