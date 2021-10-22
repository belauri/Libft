/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbrazale <lbrazale@student.42madrid.es>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 17:05:36 by lbrazale          #+#    #+#             */
/*   Updated: 2021/09/14 10:51:59 by lbrazale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t		cnt;
	char		*str_dst;
	const char	*str_src;

	str_src = src;
	str_dst = dst;
	cnt = 0;
	if (dst == src)
		return (dst);
	else if (dst > src)
	{
		while (len > cnt++)
			str_dst[len - cnt] = str_src[len - cnt];
	}
	else
	{
		while (len-- > 0)
			*str_dst++ = str_src[cnt++];
	}
	return (dst);
}
