/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printint.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohamadou <ohamadou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 04:34:06 by ohamadou          #+#    #+#             */
/*   Updated: 2023/01/17 04:51:15 by ohamadou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_printint(int nb, char c)
{
	int i;
	int number;
	int sign;

	if (!nb)
		return (1);
	if (nb < 0)
	{
		sign = 1;
		number = -nb;
	}
	else
	{
		sign = 0;
		number = nb;
	}

	i = 0;
	if (c == 'd')
	{
		while (number)
		{
			number /= 10;
			i++;
		}
		return (sign + i);
	}
	if (c == 'x')
	{
		while (number)
		{
			number /= 16;
			i++;
		}
		return (1);
	}
	return (0);
}
