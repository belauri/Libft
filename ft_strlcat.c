/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbrazale <lbrazale@student.42madrid.es>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 15:36:10 by lbrazale          #+#    #+#             */
/*   Updated: 2021/09/14 15:50:05 by lbrazale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	cnt_dst;
	size_t	cnt_src;
	size_t	x;
	size_t	y;

	cnt_src = ft_strlen(src);
	cnt_dst = ft_strlen(dst);
	if (dstsize <= cnt_dst)
		return (dstsize + cnt_src);
	x = cnt_dst;
	y = 0;
	while (src[y] && x < (dstsize - 1))
		dst[x++] = src[y++];
	dst[x] = '\0';
	return (cnt_dst + cnt_src);
}
