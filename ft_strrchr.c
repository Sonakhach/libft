/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchar.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sokhacha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 19:00:04 by sokhacha          #+#    #+#             */
/*   Updated: 2022/04/05 11:35:52 by sokhacha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char	*s, int c)
{
	int		i;
	int		j;
	char	l;

	l = c;
	j = 0;
	i = 0;
	while (s[i] != '\0')
	{
		j++;
		i++;
	}
	while (j >= 0)
	{
		if (s[j] == l)
			return ((char *)&s[j]);
		j--;
	}
	return (NULL);
}
