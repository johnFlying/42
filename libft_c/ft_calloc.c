/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvolante <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 11:47:30 by gvolante          #+#    #+#             */
/*   Updated: 2023/12/18 11:47:34 by gvolante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*cal;

	cal = (void*)malloc(nmemb * size);
	if (!cal)
		return (NULL);
	ft_bzero(cal, nmemb);
	return (cal);
}
