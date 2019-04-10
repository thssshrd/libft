/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzubat <tzubat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/07 15:25:16 by tzubat            #+#    #+#             */
/*   Updated: 2019/04/07 20:15:49 by tzubat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>
# include <string.h>

void	ft_bzero(void *s, size_t n);
void	*ft_memset(void *s, int c, size_t len);
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isascii(int c);
int     ft_isprint(int c);
int		ft_toupper(int c);
int		ft_tolower(int c);
int		ft_isalnum(int c);
int		ft_strlen(char *str);

//void	*ft_memalloc(size_t size);
void	ft_memdel(void **ap);
char	*ft_strnew(size_t size);
void	ft_strdel(char **as);
void	ft_strclr(char *s);
void	ft_striter(char *s, void (*f)(char *));
void	ft_striteri(char *s, void (*f)(unsigned int, char *));
//char	*ft_strmap(char const *s, char (*f)(char));
//char	*ft_strmapi(char const *s, char
//int	ft_strequ(char const *s1, char const *s2);
//int	ft_strnequ(char const *s1, char const *s2, size_t n);
//char	*ft_strsub(char const *s, unsigned int start, size_t len);
//char	*ft_strjoin(char const *s1, char const *s2);
//char	*ft_strtrim(char const *s);
//char	**ft_strsplit(char const *s, char c);
//char	*ft_itoa(int n);
void	ft_putchar(char c);
void	ft_putstr(char const *s);
void	ft_putendl(char const *s);
void	ft_putnbr(int n);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char const *s, int fd);
void	ft_putendl_fd(char const *s, int fd);
void	ft_putnbr_fd(int n, int fd);

#endif