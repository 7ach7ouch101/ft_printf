#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include<stdarg.h>
#include<stdlib.h>
#include<stdlib.h>
#include<stdio.h>
#include<unistd.h>

void ft_print_memory(long addr);
void    ft_putstr(char *str);
void    ft_putchar(char c, int *count);
void	ft_putnbr(int n);
void ft_print_hexa(long addr);
void ft_print_heXa(long addr);
void	ft_putnbru(int n);


#endif