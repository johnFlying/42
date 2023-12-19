/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvolante <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 16:32:43 by gvolante          #+#    #+#             */
/*   Updated: 2023/10/26 17:49:23 by gvolante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_atoi(const char *nptr)
{
	int	n;
	int	sign;
	int	res;

	n = 0;
	sign = 1;
	res = 0;
	while (nptr[n] == ' ' || (nptr[n] >= 9 && nptr[n] <= 13))
		n++;
	while (nptr[n] == '+' || nptr[n] == '-')
	{
		if (nptr[n] == '-')
			sign *= -1;
		n++;
	}
	while (nptr[n] >= '0' && nptr[n] <= '9')
	{
		res = res * 10 + (nptr[n] - 48);
		n++;
	}
	return (res * sign);
}
/*
int main (int argc, char **argv)
{
	int	n;
	n = 0;

	if (argc !=2)
		return (-1);
	n = ft_atoi(argv[1]);
	printf("%d\n", n);
	return (0);
}
*/
