#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

int _printf(const char *format, ...);
int process_format_string(const char *format, va_list args);
int process_conversion_specifier(char specifier, va_list args);
int _print_str(char *str);
int _putchar(char c);
int _print_custom_specifier(char *str);
int sizes(const char *our_format, int *j);

#endif /* MAIN_H */

