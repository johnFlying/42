/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvolante <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 11:50:23 by gvolante          #+#    #+#             */
/*   Updated: 2023/12/18 11:50:33 by gvolante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(const char *s)
{
	size_t len;
	char	*dup;

	len = 0;
	while(s[len])
		len++;
	len++;
	dup = (char*) malloc (len); //*sizeof(char) == 1 so ..
	if (!dup)
		return (NULL);
	return (dup);
}
