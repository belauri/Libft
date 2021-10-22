/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbrazale <lbrazale@student.42madrid.es>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 11:00:30 by lbrazale          #+#    #+#             */
/*   Updated: 2021/09/14 11:24:53 by lbrazale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*str1;
	const unsigned char	*str2;
	size_t				x;

	x = 0;
	str1 = s1;
	str2 = s2;
	while (x < n && str1[x] == str2[x])
		x++;
	if (x == n)
		return (0);
	return (str1[x] - str2[x]);
}
