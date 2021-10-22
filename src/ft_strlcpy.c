/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbrazale <lbrazale@student.42madrid.es>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 15:36:10 by lbrazale          #+#    #+#             */
/*   Updated: 2021/09/14 10:53:15 by lbrazale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	x;
	size_t	y;
	size_t	cnt;

	x = 0;
	y = 0;
	cnt = 0;
	while (src[cnt])
		cnt++;
	if (!dstsize)
		return (cnt);
	while (src[y] && x < (dstsize - 1))
	{
		dst[x] = src[y];
		x++;
		y++;
	}
	dst[y] = '\0';
	return (cnt);
}
