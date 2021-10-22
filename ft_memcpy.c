/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbrazale <lbrazale@student.42madrid.es>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 13:33:30 by lbrazale          #+#    #+#             */
/*   Updated: 2021/09/14 14:13:22 by lbrazale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t		cnt;
	char		*str_dst;
	const char	*str_src;

	if (src == NULL && dst == NULL)
		return (NULL);
	str_dst = dst;
	str_src = src;
	cnt = 0;
	while (cnt < n)
	{
		str_dst[cnt] = str_src[cnt];
		cnt++;
	}
	return (dst);
}
