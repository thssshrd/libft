/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzubat <tzubat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/07 19:12:49 by tzubat            #+#    #+#             */
/*   Updated: 2019/04/07 19:17:06 by tzubat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n >= 10 || n <= -10)
	{
		ft_putnbr_fd((n / 10), fd);
		if (n < 0)
			ft_putnbr_fd((0 - n % 10), fd);
		else
			ft_putnbr_fd((n % 10), fd);
	}
	else
	{
		if (n < 0)
		{
			ft_putchar_fd(('-'), fd);
			ft_putchar_fd(('0' - n), fd);
		}
		else
			ft_putchar_fd((n + '0'), fd);
	}
}
