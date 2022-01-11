/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_utlis.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeziani <mmeziani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/28 19:50:08 by mmeziani          #+#    #+#             */
/*   Updated: 2022/01/11 20:59:02 by mmeziani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include<unistd.h>

int ft_print_memory(long addr, int *count)
{
	char *str = "0123456789abcdef";
	int a;
	long tmp;
	char    *s;

	a = 0;
	tmp = addr;
	while(tmp)
	{
		tmp = tmp / 16;
		a++;
	}
	s = malloc(sizeof(char) * a);
	s[a] = '\0';
	a--;
	while(addr)
	{
		s[a--] = (addr % 16);
		addr = addr / 16;
	}
	ft_putstr("0x", count);
	while(s[++a])
		ft_putchar(str[s[a]], count);
}

void    ft_putstr(char *str, int *count)
{
    int i;

    i = 0;
    while(str[i] != '\0')
    {
        ft_putchar(str[i], count);
        i++;
    }
}

void	ft_putchar(char c, int *count)
{
	*count += write(1, &c, 1);
}


int	negatif(int n)
{
	write (1, "-", 1);
	n = n * (-1);
	return (n);
}
int	countlen(int a, int count)
{
	while (a)
	{
		a = a / 10;
		count = count * 10;
	}
	return (count);
}
void	ft_putnbr(int n, int *count)
{
	unsigned int	count_nb;
	unsigned int	a;
	unsigned int	b;
	unsigned int	c;

	if (n < 0)
		n = negatif(n);
	if (n == 0)
	{
		ft_putchar('0', count);
		return ;
	}
	c = n;
	a = c;
	b = c;
	count_nb = 1;
	a = a / 10;
	count_nb = countlen(a, count_nb);
	while (count)
	{
		c = (c / count_nb) + 48;
		ft_putchar(c, count);
		c = b % count_nb;
		count_nb = count_nb / 10;
	} 
}
