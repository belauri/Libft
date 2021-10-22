/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbrazale <lbrazale@student.42madrid.es>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 14:50:30 by lbrazale          #+#    #+#             */
/*   Updated: 2021/09/14 15:22:35 by lbrazale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	cnt;
	char	*str;

	str = malloc((count * size) * sizeof(char));
	if (!str)
		return (NULL);
	cnt = 0;
	while (cnt < (count * size))
		str[cnt++] = 0;
	return (str);
}
