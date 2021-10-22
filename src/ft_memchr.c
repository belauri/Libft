/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbrazale <lbrazale@student.42madrid.es>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 15:24:51 by lbrazale          #+#    #+#             */
/*   Updated: 2021/09/14 14:09:06 by lbrazale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*str;
	size_t				cnt;

	cnt = 0;
	str = s;
	while (cnt < n && str[cnt] != (unsigned char)c)
		cnt++;
	if (cnt == n)
		return (NULL);
	return ((void *)&str[cnt]);
}
