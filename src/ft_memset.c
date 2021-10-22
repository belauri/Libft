/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbrazale <lbrazale@student.42madrid.es>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 12:59:46 by lbrazale          #+#    #+#             */
/*   Updated: 2021/09/14 10:49:28 by lbrazale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	cnt;
	char	*str;

	str = b;
	cnt = 0;
	while (cnt < len)
	{
		str[cnt] = c;
		cnt++;
	}
	return (b);
}
