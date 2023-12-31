/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvolante <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 13:41:40 by gvolante          #+#    #+#             */
/*   Updated: 2023/10/16 13:48:57 by gvolante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memcpy(void *d, const void *s, size_t len)
{
	size_t	cont;

	cont = 0;
	while (cont <= len)
	{
		d[cont] = s[cont];
		cont++;
	}
	return (d);
}
