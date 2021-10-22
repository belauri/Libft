/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbrazale <lbrazale@student.42madrid.es>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 13:21:35 by lbrazale          #+#    #+#             */
/*   Updated: 2021/09/08 13:29:30 by lbrazale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	cnt;
	char	*str;

	str = s;
	cnt = 0;
	while (cnt < n)
	{
		str[cnt] = '\0';
		cnt++;
	}
}
