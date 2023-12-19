/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvolante <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 12:57:18 by gvolante          #+#    #+#             */
/*   Updated: 2023/10/26 17:24:30 by gvolante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>
#include <unistd.h>

char	*strnstr(const char *bigg, const char *little, size_t len)
{
	char	*big;
	size_t	n;
	size_t	m;
	size_t	lt;
	size_t	flag;

	big = (char *)bigg;
	n = 0;
	lt = 0;
	flag = 0;
	if (!*little)
		return ((char *)big);
	while (little[lt])
		lt++;
	while (n < len -(lt -1))
	{
		m = 0;
		while (m < lt)
		{
			if (big[n + m] == little[m])
				flag++;
			m++;
		}
		if (flag == m)
			return (&big[n]);
		n++;
	}
	return (NULL);
}
/*	
int main(int argc, char **argv)
{
	if (argc != 4)
		return (-1);
	char *c;
	c = strnstr(argv[1],argv[2],(size_t) argv[3]);
	write(1, c, 1);
}
*/
