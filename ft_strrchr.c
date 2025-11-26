/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybel-maa <ybel-maa@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 13:15:20 by ybel-maa          #+#    #+#             */
/*   Updated: 2025/11/18 13:23:02 by ybel-maa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char			*last;
	unsigned char	uc;

	uc = (unsigned char)c;
	last = NULL;
	while (*s)
	{
		if (*s == uc)
			last = (char *)s;
		s++;
	}
	if (*s == uc)
		last = (char *)s;
	return (last);
}
