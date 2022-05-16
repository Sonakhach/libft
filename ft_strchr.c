/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sokhacha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 17:39:00 by sokhacha          #+#    #+#             */
/*   Updated: 2022/04/05 11:33:31 by sokhacha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char	*s, int c)
{
	int		i;
	char	l;

	i = 0;
	l = c;
	while (s[i] && s[i] != l)
		i++;
	if (s[i] == l)
		return ((char *)&s[i]);
	return (NULL);
}
