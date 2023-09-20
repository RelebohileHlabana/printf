#include "main.h"
#include <ctype.h>

/**
 * calculate_width - Calculate the width for printing
 * @format: Formatted string used to print the arguments.
 * @index: Index to track the position in the format string.
 * @list: List of arguments.
 *
 * Return: The calculated width.
 */
int calculate_width(const char *format, int *index, va_list list)
{
	int current_i;
	int width = 0;

	for (current_i = *index + 1; format[current_i] != '\0'; current_i++)
	{
		if (isdigit((unsigned char)format[current_i]))
		{
			width *= 10;
			width += format[current_i] - '0';
		}
		else if (format[current_i] == '*')
		{
			current_i++;
			width = va_arg(list, int);
			break;
		}
		else
		{
			break;
		}
	}

	*index = current_i - 1;

	return (width);
}
