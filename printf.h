/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohamadou <ohamadou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 04:02:49 by ohamadou          #+#    #+#             */
/*   Updated: 2023/01/17 04:56:28 by ohamadou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

# include <unistd.h>

void	ft_putstr(char *s);
char	ft_putchar(char c);
void	ft_putnbr(int n);
int ft_printint(int nb, char c);

#endif