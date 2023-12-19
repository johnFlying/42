/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvolante <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 12:38:38 by gvolante          #+#    #+#             */
/*   Updated: 2023/10/26 18:11:29 by gvolante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*str1 = s1;
	const unsigned char	*str2 = s2;
	size_t				ln;

	ln = 0;
	while (ln < n)
	{
		if (str1[ln] != str2[ln])
			return (((int) str1[ln]) - (int) str2[ln]);
		ln++;
	}
	return (0);
}
