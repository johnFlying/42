/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvolante <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 17:44:57 by gvolante          #+#    #+#             */
/*   Updated: 2023/12/18 13:31:24 by gvolante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

#include <unistd.h>
#include <stdlib.h>

int		ft_isalpha(int n);
int		ft_isdigit(int n);
int		ft_isalnum(int n);
int		ft_isascii(int n);
int		ft_isprint(int n);
size_t	ft_strlen(const char *c);
void	*ft_memset(void *c, int n, size_t len);
void	ft_bzero(void *c, size_t len);
void	*ft_memcpy(void *c, const void *d, size_t len);
void	*ft_memmove(void *c, const void *d, size_t len);
size_t	ft_strlcpy(char *c, const char *d, size_t len);
size_t	ft_strlcat(char *c, const char *d, size_t len);
int		ft_toupper(int n);
int		ft_tolower(int n);
char	*ft_strchr(const char *c, int n);
char	*ft_strrchr(const char *c, int n);
int		ft_strncmp(const char *c, const char *d, size_t len);
void	*ft_memchr(const void c, int n, size_t len);
int		ft_memcmp(const void *c, const void *d, size_t len);
char	*ft_strnstr(const char *big, const char *little, size_t len);
int		ft_atoi(const char *c);
void	*ft_calloc(size_t nmemb, size_t size);
#endif
