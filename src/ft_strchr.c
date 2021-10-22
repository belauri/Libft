/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbrazale <lbrazale@student.42madrid.es>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 13:41:44 by lbrazale          #+#    #+#             */
/*   Updated: 2021/09/14 15:42:37 by lbrazale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	cnt;

	cnt = 0;
	while (s[cnt] && s[cnt] != (char)c)
		cnt++;
	if (s[cnt] == '\0' && (char)c != '\0')
		return (0);
	else
		return ((char *)&s[cnt]);
}
