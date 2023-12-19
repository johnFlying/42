/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvolante <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 11:59:02 by gvolante          #+#    #+#             */
/*   Updated: 2023/10/26 18:05:09 by gvolante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memchr(const void *c, int n, size_t len)
{
	const unsigned char	*cpc;
	size_t				ln;

	ln = 0;
	cpc = c;
	while (ln < len)
	{
		if (cpc[ln] == n)
			return ((void *)&cpc[ln]);
		n++;
	}
	return (NULL);
}
