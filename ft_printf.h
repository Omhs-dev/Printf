/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohamadou <ohamadou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 04:02:49 by ohamadou          #+#    #+#             */
/*   Updated: 2023/01/28 20:57:53 by ohamadou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include "libft/libft.h"

int ft_print_hex(unsigned int num, const char format);
int	ft_printf(const char *str, ...);
void	ft_putstr(char *s);
char	ft_putchar(char c);
// void	ft_putnbr(int n);
int ft_printnbr(int n);
int ft_printptr(unsigned long long ptr);
int ft_print_unsigned(unsigned int n);
int ft_printstr(char *str);
int ft_printpercent(void);
int	ft_printchar(int c);

#endif