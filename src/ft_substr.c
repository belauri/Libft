/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbrazale <lbrazale@student.42madrid.es>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/05 16:20:33 by lbrazale          #+#    #+#             */
/*   Updated: 2021/09/15 12:12:56 by lbrazale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	x;
	size_t	y;
	char	*str;

	if (!s)
		return (NULL);
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	y = ft_strlen(&s[start]);
	if (len > y)
		len = y;
	str = malloc (sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	x = 0;
	while (s[start] && x < len)
		str[x++] = s[start++];
	str[x] = '\0';
	return (str);
}
