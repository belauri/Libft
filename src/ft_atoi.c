/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbrazale <lbrazale@student.42madrid.es>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 11:53:07 by lbrazale          #+#    #+#             */
/*   Updated: 2021/09/14 14:26:12 by lbrazale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int					cnt;
	int					neg;
	unsigned long long	nb;

	cnt = 0;
	neg = 1;
	nb = 0;
	while (str[cnt] == '\t' || str[cnt] == '\n' || str[cnt] == '\v'
		|| str[cnt] == '\f' || str[cnt] == ' ' || str[cnt] == '\r')
		cnt++;
	if (str[cnt] == '+' || str[cnt] == '-')
	{
		if (str[cnt] == '-')
			neg *= -1;
		cnt++;
	}
	while (str[cnt] >= '0' && str[cnt] <= '9')
		nb = nb * 10 + str[cnt++] - '0';
	if (neg == 1 && nb > LLONG_MAX)
		return (-1);
	if (neg == -1 && nb > LLONG_MAX)
		return (0);
	return (nb * neg);
}
