/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvolante <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 16:46:03 by gvolante          #+#    #+#             */
/*   Updated: 2023/10/26 17:38:38 by gvolante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

size_t	ft_strlcat(char *c, const char *d, size_t len)
{
	int	n;
	int	m;

	n = 0;
	m = 0;
	while (c[n])
		n++;
	if ((size(c) - len -1 < len))
		len = size(c) - len -1;
	if (len > 0)
	{
		while (m < (len -1) && d[m] != '\0')
		{
			c[n + m] = d[m];
			m++;
		}
		c[n + m] = '\0';
	}
	n = 0;
	while (c[n])
		n++;
	return (n);
}
