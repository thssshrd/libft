/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzubat <tzubat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/07 18:25:29 by tzubat            #+#    #+#             */
/*   Updated: 2019/04/07 18:50:33 by tzubat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int nb)
{
	if (nb >= 10 || nb <= -10)
	{
		ft_putnbr(nb / 10);
		if (nb < 0)
			ft_putnbr(0 - nb % 10);
		else
			ft_putnbr(nb % 10);
	}
	else
	{
		if (nb < 0)
		{
			ft_putchar('-');
			ft_putchar('0' - nb);
		}
		else
			ft_putchar(nb + '0');
	}
}
