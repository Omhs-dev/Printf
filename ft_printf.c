/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohamadou <ohamadou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 23:40:14 by ohamadou          #+#    #+#             */
/*   Updated: 2023/01/17 04:55:42 by ohamadou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"
#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>

typedef struct s_ft_printf
{
	int print_len;
	int width;
}   t_p;

int	ft_printchar(int c)
{
	write(1, &c, 1);
	return (1);
}

int print(va_list args, const char *format, t_p *prin)
{
	int d;

	if (*format == 'd')
	{
		d = va_arg(args, int);
		ft_putnbr(d);
		prin -> print_len += ft_printint(d, *format);
	}

	if (*format == 'c')
		prin -> print_len += ft_printchar(va_arg(args, int));
	return (prin -> print_len);
}

int	ft_printf(const char *str, ...)
{
	t_p prin;
	va_list args;
	int i;

	va_start(args, str);
	prin.print_len = 0;
	prin.width = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] == '%')
			printf("no no");
		else
			prin.print_len += ft_printchar(str[i]);
		if (!str)
		{
			write(1, "null", 6);
			va_end(args);
			return (prin.print_len);
		}
		i++;
	}
	va_end(args);
	return (prin.print_len);
}

int main()
{
	ft_printf("one");
	return (0);
}
