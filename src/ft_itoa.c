/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbrazale <lbrazale@student.42madrid.es>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 15:24:03 by lbrazale          #+#    #+#             */
/*   Updated: 2021/09/17 11:57:39 by lbrazale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_cntnum(long long int num)
{
	size_t	len;

	len = 1;
	while (num >= 10)
	{
		num = num / 10;
		len++;
	}
	return (len);
}

static char	*ft_fillstr(long long int num, int sign, char *str, size_t len)
{
	if (sign != 0)
		str[0] = '-';
	str[len--] = '\0';
	while (num >= 10)
	{
		str[len] = num % 10 + '0';
		num = num / 10;
		len--;
	}
	str[len] = num + '0';
	return (str);
}

char	*ft_itoa(int n)
{
	long long int	num;
	size_t			len;
	char			*str;
	int				sign;

	num = n;
	sign = 0;
	if (num < 0)
	{
		sign++;
		num = num * -1;
	}
	len = ft_cntnum(num) + sign;
	str = malloc ((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	return (ft_fillstr(num, sign, str, len));
}
