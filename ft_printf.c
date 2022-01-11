/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeziani <mmeziani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/28 19:49:19 by mmeziani          #+#    #+#             */
/*   Updated: 2022/01/11 20:52:52 by mmeziani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while ((s1[i] == s2[i] && i < (n - 1)) && (s1[i] != '\0' && s2[i] != '\0'))
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

void     ft_printf(const char *type, ...)
{
    va_list arg;
    va_start(arg,type);

    while(*type)
    {
        if(*type != '%')
            ft_putchar(*type);
        else if(ft_strncmp(type,"%c",2) == 0)
            ft_putchar(va_arg(arg,int));
        else if(ft_strncmp(type,"%s",2) == 0)
            ft_putstr(va_arg(arg,char*));
        else if(ft_strncmp(type,"%p",2) == 0)
            ft_print_memory((long)va_arg(arg,char*));
		else if(ft_strncmp(type,"%d",2) == 0 || ft_strncmp(type,"%i",2) == 0)
			ft_putnbr(va_arg(arg,int));
		else if(ft_strncmp(type,"%u",2) == 0)
			ft_putnbru(va_arg(arg,unsigned int));
		else if(ft_strncmp(type,"%x",2) == 0)
			ft_print_hexa(va_arg(arg, int));
		else if(ft_strncmp(type,"%X",2) == 0)
			ft_print_heXa(va_arg(arg, int));
		else if(ft_strncmp(type,"%%",2) == 0)
			ft_putchar('%');
        if(*type == '%')
            type++;
        type++;
    }
    va_end(arg);
}
int main(void)
{
    int a;
	int b;
	a = 4;
	b = 5;
	ft_printf("%x",-100);
}