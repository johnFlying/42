/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvolante <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 12:08:33 by gvolante          #+#    #+#             */
/*   Updated: 2023/10/21 12:31:16 by gvolante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memmove(void *c, const void *d, size_t len)
{
	void	*buffer;
	size_t	n;

	n = 0;
	buffer = (void *) malloc (len * sizeof (char));
	while (n < len)
	{
		buffer[n] = d[n];
		n++;
	}
	n = 0;
	while (n < len)
	{
		c[n] = buffer[n];
		n++;
	}
	free(buffer);
	return (c);
}
