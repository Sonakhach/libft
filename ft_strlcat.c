/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sokhacha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 12:59:59 by sokhacha          #+#    #+#             */
/*   Updated: 2022/03/25 14:05:46 by sokhacha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char	*dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	k;

	j = 0;
	i = 0;
	k = 0;
	while (dst[i] && i < dstsize)
		i++;
	while (src[j])
		j++;
	if (dstsize)
	{
		while ((i + k + 1) < dstsize && src[k])
		{
			dst[i + k] = src[k];
			k++;
		}
	}
	if (i != dstsize)
	{
		dst[i + k] = 0;
	}
	return (i + j);
}
