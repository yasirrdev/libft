/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybel-maa <ybel-maa@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 17:14:02 by ybel-maa          #+#    #+#             */
/*   Updated: 2025/11/18 13:22:37 by ybel-maa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	length_src;
	size_t	length_dest;
	size_t	i;

	length_src = ft_strlen(src);
	length_dest = ft_strlen(dest);
	i = 0;
	if (size <= length_dest)
		return (length_src + size);
	while (src[i] && (length_dest + i + 1) < size)
	{
		dest[length_dest + i] = src[i];
		i++;
	}
	dest[length_dest + i] = '\0';
	return (length_dest + length_src);
}
