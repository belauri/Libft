/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbrazale <lbrazale@student.42madrid.es>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 12:48:56 by lbrazale          #+#    #+#             */
/*   Updated: 2021/09/15 14:35:46 by lbrazale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_checkchr(char chr, char *set)
{
	int	cnt;

	cnt = 0;
	while (set[cnt])
	{
		if (set[cnt] == chr)
			return (1);
		cnt++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	len;
	size_t	x;
	size_t	y;

	if (!s1)
		return (NULL);
	if (!set)
		return ((char *)s1);
	x = 0;
	len = ft_strlen(s1);
	while (s1[x] && ft_checkchr(s1[x], (char *)set))
		x++;
	while ((len - 1) > 0 && ft_checkchr(s1[len - 1], (char *)set))
		len--;
	if (x > len)
		len = x;
	str = malloc (sizeof(char) * (len - x + 1));
	if (!str)
		return (NULL);
	y = 0;
	while (x < len)
		str[y++] = s1[x++];
	str[y] = '\0';
	return (str);
}
