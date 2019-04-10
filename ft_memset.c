/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzubat <tzubat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/04 20:13:31 by tzubat            #+#    #+#             */
/*   Updated: 2019/04/07 15:31:49 by tzubat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t len)
{
	size_t			i;
	char			*ch;
	unsigned char	tmp;

	tmp = (unsigned char)c;
	ch = (char *)s;
	i = 0;
	while (i < len)
	{
		ch[i] = tmp;
		i++;
	}
	return (s);
}
