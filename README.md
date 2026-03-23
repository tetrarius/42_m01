*This project has been created as part of the 42 curriculum by aravakia.*

# ft_printf

## Description
Because `ft_putstr` and `ft_putnbr` are not enough, a proper `printf` is much better! 

The goal of this project is to recode our own version of the standard C library `printf` function. This project introduces the concept of variadic functions in C (functions that accept a variable number of arguments) and helps build a solid understanding of string parsing and output formatting. 

The `ft_printf` function mimics the behavior of the original `printf` and successfully handles the following format specifiers:
* `%c` — Prints a single character.
* `%s` — Prints a string.
* `%p` — Prints a pointer address in hexadecimal format.
* `%d` & `%i` — Prints a decimal (base 10) number.
* `%u` — Prints an unsigned decimal (base 10) number.
* `%x` & `%X` — Prints a number in lowercase or uppercase hexadecimal (base 16).
* `%%` — Prints a percent sign.

## Algorithm and Data Structure
To maintain clean architecture and comply with the 42 Norm (which forbids `switch/case` statements and limits functions to 25 lines), the project relies on a **Modular Dispatcher Algorithm** and the `va_list` structure.

**Data Structure:** The core structure used is `va_list` from the `<stdarg.h>` library, which allows iterating through an unknown number of arguments dynamically using `va_start`, `va_arg`, and `va_end`.

**Algorithm:**
1. **Parsing:** The main function iterates through the `format` string character by character. Regular characters are printed immediately, and a counter is incremented.
2. **Dispatching:** Upon encountering a `%` symbol, the parsing pauses, and the next character is passed to a dispatcher function (`ft_check_format`). This function uses an `if / else if` chain to route the argument to a specific helper function (e.g., `ft_print_hex`, `ft_print_string`).
3. **Base Conversion via Recursion & Arrays:** For numeric and hexadecimal conversions, the algorithm uses a recursive approach combined with a character array (e.g., `char *base = "0123456789abcdef";`). It divides the number by the target base (10 or 16) recursively until it reaches the most significant digit, then uses the modulo operator (`n % base`) as an index to print the correct character from the base array.
4. **Return Value:** Each helper function calculates the exact length of the printed string/number and returns it to the main loop, ensuring `ft_printf` returns the total number of characters printed, just like the original libc function.

## Instructions
The project is compiled into a static library (`libftprintf.a`) and includes an integrated `libft` module.

**1. Compilation:**
Run the following command at the root of the repository to compile the project. The `Makefile` will automatically navigate to the `libft` directory, compile it, and link everything together.

    make

*(Other available rules: `make clean` to remove object files, `make fclean` to remove objects and the library, and `make re` to recompile from scratch).*

**2. Usage:**
Include the header file in your C code:

    #include "ft_printf.h"

    int main(void)
    {
        ft_printf("Hello %s! The answer is %d, or %X in HEX.\n", "World", 42, 42);
        return (0);
    }

Compile your program alongside the library:

    cc -Wall -Wextra -Werror main.c libftprintf.a -o my_program
    ./my_program

## Resources
**Classic References:**
* `man 3 printf` — Official documentation for the standard printf behavior.
* [GNU C Manual: Variadic Functions](https://www.gnu.org/software/libc/manual/html_node/Variadic-Functions.html) — Understanding `<stdarg.h>`.
* Numeric base conversion logic and C standard data types limits.

**Usage of AI:**
An AI assistant (LLM) was utilized during the development of this project strictly as a debugging and educational tool ("rubber duck" debugging). Specifically, AI was used for:
1. **Makefile structuring:** Assisting with the correct syntax for compiling nested directories (using the `make -C` flag to compile the integrated `libft`).
2. **Norminette compliance:** Identifying the root cause of formatting errors like `MISALIGNED_VAR_DECL` and `FORBIDDEN_CHAR_NAME`.
3. **Conceptualizing logic:** Brainstorming the most elegant way to handle hex conversions without hardcoding multiple conditions, leading to the array indexing approach (`base[n % 16]`). The actual implementation and code writing were done manually.
