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

            switch (*format)
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
                default:
                    _putchar('%');
                    _putchar(*format);
                    printed_chars += 2;
                    break;
            }
        }
        format++;
    }

    va_end(args);

    return printed_chars;
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

    return printed_chars;
}
