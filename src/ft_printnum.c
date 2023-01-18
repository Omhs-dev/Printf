/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnum.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohamadou <ohamadou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 02:52:57 by ohamadou          #+#    #+#             */
/*   Updated: 2023/01/18 03:36:21 by ohamadou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./printf.h"

void ft_printnum(long long int num, int base, int *len)
{
	char *hex;

	hex = "0123456789abcdef";
	if (num < 0)
	{
		num *= -1;
		*len += write(1, "-", 1);
	}
	if (num >= base)
		ft_printnum((num / base), base, len);
	*len += write(1, &hex[num % base], 1);
}
