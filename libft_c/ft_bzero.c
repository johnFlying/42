/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvolante <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 13:30:15 by gvolante          #+#    #+#             */
/*   Updated: 2023/11/21 16:37:50 by gvolante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_bzero(void *c, size_t len)
{
	size_t	cont;

	cont = 0;
	while (cont <= len)
	{
		c[cont] = '\0';
		cont ++;
	}
}

//alt
//while(len--)
//c[cont]='\0';
