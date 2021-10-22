/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbrazale <lbrazale@student.42madrid.es>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 14:21:05 by lbrazale          #+#    #+#             */
/*   Updated: 2021/09/20 14:57:32 by lbrazale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_strnum(char const *s, char c)
{
	int	x;
	int	str;

	x = 0;
	str = 0;
	if (!s[x])
		return (str);
	while (s[++x])
	{
		if (s[x] == c && s[x - 1] != c)
			str++;
	}
	if (!s[x] && s[x - 1] != c)
		str++;
	return (str);
}

static char	*ft_createcpy(char const *s, char c, int *x)
{
	int		y;
	int		cnt;
	char	*str;

	cnt = 0;
	while (s[(*x) + cnt] && s[(*x) + cnt] != c)
		cnt++;
	str = malloc((cnt + 1) * sizeof(char));
	if (!str)
		return (NULL);
	y = 0;
	while (y < cnt)
	{
		str[y++] = s[(*x)++];
	}
	str[y] = '\0';
	return (str);
}

static char	**ft_matrixfree(char **matrix, int y)
{
	int	cnt;

	cnt = 0;
	while (cnt < y)
		free(matrix[cnt++]);
	free(matrix);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**matrix;
	int		str;
	int		x;
	int		y;

	if (!s)
		return (NULL);
	str = ft_strnum(s, c);
	matrix = malloc((str + 1) * sizeof(char *));
	if (!matrix)
		return (NULL);
	x = -1;
	y = 0;
	while (y < str && s[++x])
	{
		if (s[x] != c)
		{
			matrix[y++] = ft_createcpy(s, c, &x);
			if (!matrix[y - 1])
				return (ft_matrixfree(matrix, y - 1));
		}
	}
	matrix[str] = NULL;
	return (matrix);
}
