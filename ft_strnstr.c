/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbrazale <lbrazale@student.42madrid.es>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 15:36:10 by lbrazale          #+#    #+#             */
/*   Updated: 2021/09/14 15:52:40 by lbrazale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	x;
	size_t	y;

	x = 0;
	if (!*needle)
		return ((char *)haystack);
	while (x < len && haystack[x])
	{
		y = 0;
		while ((x + y) < len && haystack[x + y] == needle[y])
		{
			if (! needle[y + 1])
				return ((char *)&haystack[x]);
			y++;
		}
		x++;
	}
	return (NULL);
}
