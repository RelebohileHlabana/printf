#include "main.h"
#include <stdarg.h>
#include <unistd.h>

/**
 * _printf - Prints formatted output to stdout
 * @format: The format string
 *
 * Return: The number of characters printed (excluding the null byte)
 */
int _printf(const char *format, ...)
{
	va_list args;
	int printed_chars = 0;

	va_start(args, format);
	printed_chars = process_format_string(format, args);
	va_end(args);

	return (printed_chars);
}

/**
 * process_format_string - Process the format string and print output
 * @format: The format string
 * @args: The variable arguments list
 *
 * Return: The number of characters printed
 */
int process_format_string(const char *format, va_list args)
{
	int printed_chars = 0;

	while (*format)
	{
		if (*format != '%')
		{
			_putchar(*format);
			printed_chars++;
		}
		else
		{
			format++;
			if (*format == '\0')
				break;
			printed_chars += process_conversion_specifier(*format, args);
		}
		format++;
	}

	return (printed_chars);
}

/**
 * process_conversion_specifier - Process a conversion specifier
 * @specifier: The conversion specifier character
 * @args: The variable arguments list
 *
 * Return: The number of characters printed
 */
int process_conversion_specifier(char specifier, va_list args)
{
	int printed_chars = 0;

	switch (specifier)
	{
		case 'c':
			_putchar(va_arg(args, int));
			printed_chars++;
			break;
		case 's':
			printed_chars += _print_str(va_arg(args, char *));
			break;
		case '%':
			_putchar('%');
			printed_chars++;
			break;
		case 'r':
			printed_chars += _print_custom_specifier(va_arg(args, char *));
			break;
		default:
			_putchar('%');
			_putchar(specifier);
			printed_chars += 2;
			break;
	}

	return (printed_chars);
}

/**
 * _print_str - Prints a string
 * @str: The string to print
 *
 * Return: The number of characters printed
 */
int _print_str(char *str)
{
	int printed_chars = 0;

	if (str == NULL)
		str = "(null)";

	while (*str)
	{
		_putchar(*str);
		str++;
		printed_chars++;
	}

	return (printed_chars);
}
/**
 * _print_custom_specifier - Prints a custom specifier
 * @str: The string to print as the custom specifier
 *
 * Return: The number of characters printed
 */
int _print_custom_specifier(char *str)
{
	int printed_chars = 0;

	if (str == NULL)
		str = "(null)";

	/* Check for the custom specifier %r */
	if (*str == '%')
	{
		_putchar(*str);
		printed_chars++;
		str++;
	}
	else
	{
		/* Handle other characters as normal */
		_putchar('[');
		while (*str)
		{
			_putchar(*str);
			str++;
			printed_chars++;
		}
		_putchar(']');
	}

	return (printed_chars);
}
