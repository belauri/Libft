/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbrazale <lbrazale@student.42madrid.es>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 15:07:49 by lbrazale          #+#    #+#             */
/*   Updated: 2021/09/14 15:22:19 by lbrazale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	cnt;
	size_t	x;
	char	*str;

	cnt = ft_strlen(s1);
	str = malloc((cnt + 1) * sizeof(char));
	if (!str)
		return (NULL);
	x = 0;
	while (s1[x])
	{
		str[x] = s1[x];
		x++;
	}
	str[x] = '\0';
	return (str);
}
