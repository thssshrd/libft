/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzubat <tzubat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/07 18:05:39 by tzubat            #+#    #+#             */
/*   Updated: 2019/04/07 18:18:08 by tzubat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr(const char *str)
{
	int i;

	i = 0;
	if (str == NULL)
		return ;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}
