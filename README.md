ALX Africa - Holberton Software Engineering Program's Printf Group Project

This README is for our group project, developed by Chioma Victor and Immaculata Etukenyin. We have created a custom printf function in C called _printf. This function mimics the behavior of the standard library function printf and involves writing code for various functions, flags, precision, size, width, utilities, handlers, a test file, and prototypes in the main.h files. We completed this project as part of our ALX software engineering course requirements.
Project Overview

The _printf() function is designed to produce output based on a given format without relying on standard library functions. It uses a local buffer of 1024 characters to minimize calls to the write function. The printf function handles custom conversion specifiers, flag characters, and length modifiers for non-custom conversion specifiers. After successful execution, _printf() returns the total number of characters printed to stdout, excluding the null byte at the end of strings.
Function Prototype

The prototype for our _printf function is as follows:

c

int _printf(const char *format, ...);

    The first argument, format, is a constant character string used to determine how the other arguments are printed.
    The second argument is a variable number of arguments that are printed according to the format string.

Format Specifiers

The format specifiers are characters that begin with a percentage sign (%) and control the output format. There are three types of format specifiers: string format specifiers, integer format specifiers, and floating-point format specifiers.
Integer Format Specifiers and Modifiers

There are four integer format specifiers: %d, %i, %u, and %o.

    %d: Outputs a decimal number (positive or negative).
    %i: Used for integer numbers.
    %u: Used for unsigned integer numbers.
    %o: Used for octal numbers.

Each format specifier can have optional field width and precision modifiers.
String Format Specifiers

There are three string format specifiers: %s, %c, and %[...].

    %c: Outputs a single character.
    %[...]: Outputs a sequence of characters.
    %s: Outputs a string of characters.

Each string format specifier can also have field width and precision modifiers.
Length Modifiers

    l: Specifies that the output should be a long integer.
    h: Specifies a specific size of unsigned short.
    j: Specifies a short integer.
    L: Specifies a long long integer.
    q: Used for octal output.
    b: Used for binary output.
    t: Represents a boolean value.

Optional Modifiers

Optional modifiers can be used with format specifiers:

    - (left-justifies the output).
    0 (outputs leading zeros for integers).
    + (outputs a plus sign for positive numbers).
    Space (outputs a space before positive numbers).
    e or E (outputs a number in scientific notation).

Order of Evaluation

The order of evaluation for format specifiers and their modifiers is as follows:

    Evaluate the format specifier.
    Evaluate the field width and precision modifiers.
    Evaluate the optional +, -, and space flags.
    Evaluate the e or E flag.

Conversion Specifiers

Conversion specifiers follow the % character and tell the printf function what type of data to expect. Examples include:

    %s: Outputs the contents of a string.
    %c: Used for characters.
    %d: Used for signed integers.
    %u: Used for unsigned integers.
    %x or %X: Outputs hexadecimal numbers.
    %o: Used for octal numbers.
    %f: Used for floating-point numbers.
    %g: Outputs floating-point numbers in scientific notation or decimal format.
    %p: Used for addresses.
    %R: Converts to a wide character string.
    %r: Converts to a multibyte character string.
    %S: Converts values to a null-terminated string.
    %b: Converts values to an array of characters.
    %n: Returns the number of characters printed so far.

Other Features

    *: Indicates a variable argument list when you have a variable number of arguments.
    \: Used to escape special characters like \n, \t, and \b.
    - flag: Left-justifies the output.
    l or ll flag: Forces long integer types.

Pointers

Pointers store the address of another variable instead of its value. Different pointer types are used, such as:

    x: General pointer.
    R: Read-only pointer.
    S: Static pointer.
    b: Bit-field pointer.
    p: Void pointer.
    i: Incomplete pointer.
    h: Far pointer.
    #: Wildcard pointer.
    \x: Explicit pointer.

Flag Characters

Flag characters can be used with format specifiers:

    Comma (,) to separate multiple format specifiers.
    Period (.) to right-justify the output.
    Pound sign (#) to specify hexadecimal output.
    Space character to add a space between items of output.
    Single quote (') to specify character output.
    ... ellipsis brackets to print additional values not specified in the format string.

Authors

    Opara Ugochukwu Eric
    Relebohile Hlabana
