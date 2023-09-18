#include "main.h"

/**
 * sizes - Calculates size to cast the argument
 * @our_format: Formatted string to print the arguments
 * @j: List of arguments to be printed.
 *
 * Return: Precision.
 */
int sizes(const char *our_format, int *j)
{
	int curs_i = *j + 1;
	int sizes = 0;

	if (our_format[curs_i] == 'l')
		sizes = S_LONG;
	else if (our_format[curs_i] == 'h')
		sizes = S_SHORT;

	if (sizes == 0)
		*j = curs_i - 1;
	else
		*j = curs_i;

	return (sizes);
}
