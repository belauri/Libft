/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbrazale <lbrazale@student.42madrid.es>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 13:04:26 by lbrazale          #+#    #+#             */
/*   Updated: 2021/09/10 15:19:29 by lbrazale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	cnt;

	cnt = 0;
	while (s1[cnt] && s2[cnt]
		&& (s1[cnt] == s2[cnt]) && (cnt < n))
		cnt++;
	if (cnt == n)
		return (0);
	else
		return ((unsigned char)s1[cnt] - (unsigned char)s2[cnt]);
}
