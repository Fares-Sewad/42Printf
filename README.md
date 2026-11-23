*This project has been created as part of the 42 curriculum by fsewad.*

# ft_printf

## Description
The ft_printf project is part of the 42 curriculum.
The goal of this project is to recreate the standard C library function `printf()`.
This project helps develop a deeper understanding of variadic functions in C, formatted output, and how data is handled and printed.
The function supports the following conversions:

- `%c` - Print a character.
- `%s` - Print a string.
- `%p` - Print a pointer address in hexadecimal.
- `%d` - Print a decimal number.
- `%i` - Print an integer.
- `%u` - Print an unsigned decimal number.
- `%x` - Print a number in lowercase hexadecimal.
- `%X` - Print a number in uppercase hexadecimal.
- `%%` - Print the percent character.

## Instructions

### Compilation
To compile the project, run:
make

This generates the static library:
libftprintf.a

### Makefile Commands
make        # Compile the project
make clean  # Remove object files
make fclean # Remove object files and library
make re     # Recompile everything

### Usage
Include the header file in your C program:
#include "ft_printf.h"

Example:
int main(void)
{
    ft_printf("Hello %s!\n", "42");
    ft_printf("Number: %d\n", 42);
    ft_printf("Hexadecimal: %x\n", 255);
    return (0);
}
Compile your program with the library:
cc main.c -lftprintf.a -o test
Run:
./test

## Algorithm and Data Structure

### Algorithm

The ft_printf function uses an iterative parsing algorithm.

The algorithm works as follows:

1. Read the format string character by character.
2. If the current character is not `%`, print it directly.
3. If the current character is `%`, check the next character to identify the conversion specifier.
4. Retrieve the corresponding argument using `va_arg()`.
5. Call the appropriate function to print the argument.
6. Count the number of characters printed.
7. Continue until the end of the format string.
8. Return the total number of characters printed.

### Data Structure

This project uses `va_list` to handle a variable number of arguments.

The following macros are used:
- `va_start()` initializes the argument list.
- `va_arg()` retrieves the next argument.
- `va_end()` finishes processing the argument list.

No complex data structures are required because arguments are processed sequentially.

### Why This Algorithm?

An iterative approach was chosen because it allows the format string to be processed sequentially without unnecessary recursive calls.
It is simple, efficient, and makes it easier to manage different conversion specifiers.
Using `va_list` allows the function to handle different argument types dynamically.

## Resources

The following resources were used to understand and develop this project:

- [C Programming Language Documentation](https://en.cppreference.com/w/c.html)
- [Variadic Functions - C Documentation](https://en.cppreference.com/w/c/variadic)
- [Linux Man Pages - printf](https://man7.org/linux/man-pages/man3/printf.3.html)

### AI Usage

AI tools (ChatGPT) were used as a learning and debugging assistant during this project.

They were used for:

- Understanding variadic functions (`va_list`, `va_start`, `va_arg`, and `va_end`).
- Understanding conversion specifiers.
- Explaining hexadecimal and pointer conversions.
- Debugging errors and understanding return values.

The implementation and development of the project were carried out as part of my learning process at 42.