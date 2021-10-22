/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbrazale <lbrazale@student.42madrid.es>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 13:41:44 by lbrazale          #+#    #+#             */
/*   Updated: 2021/09/14 14:06:45 by lbrazale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	cnt;

	cnt = ft_strlen(s);
	while (cnt > 0 && s[cnt] != (char)c)
		cnt--;
	if (s[cnt] != (char)c)
		return (NULL);
	return ((char *)&s[cnt]);
}
