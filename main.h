#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

/* flags */
#define F_MINUS 1
#define F_PLUS 2
#define F_ZERO 4
#define F_HASH 8
#define F_SPACE 16

/* SIZES */
#define S_LONG 2
#define S_SHORT 1

/* prototypes */
int _printf(const char *format, ...);
int process_format_string(const char *format, va_list args);
int process_conversion_specifier(char specifier, va_list args);
int _print_str(char *str);
int _putchar(char c);
int _print_custom_specifier(char *str);
int sizes(const char *our_format, int *j);
int flags_get(const char *our_format, int *j);
int find_width(const char *our_format, int *j, va_list list);
int precision_get(const char *our_format, int *j, va_list list);
int precision_get(const char *our_format, int *j, va_list list);
#endif /* MAIN_H */

