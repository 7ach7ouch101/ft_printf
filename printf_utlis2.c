#include "ft_printf.h"

int	countnum(int a, int count)
{
	while (a)
	{
		a = a / 10;
		count = count * 10;
	}
	return (count);
}
void	ft_putnbru(unsigned int n, int *count)
{
	unsigned int	count_nb;
	unsigned int	a;
	unsigned int	b;
	unsigned int	c;

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
	count_nb = countnum(a, count_nb);
	while (count_nb)
	{
		c = (c / count_nb) + 48;
		ft_putchar(c, count);
		c = b % count_nb;
		count_nb = count_nb / 10;
	} 
}
void ft_print_hexa(long addr, int *count)
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
	while(s[++a])
		ft_putchar(str[s[a]], count);
}

void ft_print_heXa(long addr, int *count)
{
	char *str = "0123456789ABCDEF";
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
	while(s[++a])
		ft_putchar(str[s[a]], count);
}