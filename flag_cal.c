#include "main.h"

/**
 * flags_get - Calculate the active flags.
 * @our_format: Formatted string to print the arguments.
 * @j: Parameter.
 * Return: Flags:
 */
int flags_get(const char *our_format, int *j)
{
	/* - + 0 # ' ' */
	/* 1 2 4 8  16 */
	int a, curs_i;
	int flags = 0;
	const char FLAGS_CH[] = {'-', '+', '0', '#', ' ', '\0'};
	const int FLAGS_ARR[] = {F_MINUS, F_PLUS, F_ZERO, F_HASH, F_SPACE, 0};

	curs_i = *j + 1;

	while (our_format[curs_i] != '\0')
	{
		for (a = 0; FLAGS_CH[a] != '\0'; a++)
		{
			if (our_format[curs_i] == FLAGS_CH[a])
			{
				flags |= FLAGS_ARR[a];
				break;
			}
		}

		if (FLAGS_CH[a] == '\0')
			break;

		curs_i++;
	}

	*j = curs_i - 1;

	return (flags);
}
