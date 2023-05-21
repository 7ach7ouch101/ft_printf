ft_printf
The goal of this project is pretty straightforward. i hade to recode printf().
I learned about using a variable number of arguments. How cool is that??
It is actually pretty cool :)

ft_printf Because ft_putnbr() and ft_putstr() aren’t enough.

Description->: Write a library that contains ft_printf(), a function that will mimic the original printf() You have to recode the printf() function from libc.

Program name->: libftprintf.a

External functs->: malloc, free, write, va_start, va_arg, va_copy, va_end.

Here are the requirements:
• Don’t implement the buffer management of the original printf().

• Your function has to handle the following conversions: cspdiuxX%

• Your function will be compared against the original printf().

• You must use the command ar to create your library.

You have to implement the following conversions->:
• %c Prints a single character.

• %s Prints a string (as defined by the common C convention).

• %p The void * pointer argument has to be printed in hexadecimal format.

• %d Prints a decimal (base 10) number.

• %i Prints an integer in base 10.

• %u Prints an unsigned decimal (base 10) number.

• %x Prints a number in hexadecimal (base 16) lowercase format.

• %X Prints a number in hexadecimal (base 16) uppercase format.

• %% Prints a percent sign.
