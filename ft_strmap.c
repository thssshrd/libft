/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzubat <tzubat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/07 20:06:16 by tzubat            #+#    #+#             */
/*   Updated: 2019/04/07 20:42:01 by tzubat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*str;
	int		i;

	i = 0;
	while (s[i])
		i++;
	str = ft_strnew((size_t)i + 1);
	i = 0;
	while (str[i])
	{
		str[i] = f(s[i]);
		i++;
	}
	return (str);
}
