/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzubat <tzubat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/07 17:36:51 by tzubat            #+#    #+#             */
/*   Updated: 2019/04/07 19:37:44 by tzubat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	size_t *abc;

	if (size >= 4294967295)
		return (NULL);
	if (!(abc = (size_t*)malloc(sizeof(size))))
		return (NULL);
	ft_bzero(abc, size);
	return (abc);
}
