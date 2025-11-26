/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybel-maa <ybel-maa@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 12:49:05 by ybel-maa          #+#    #+#             */
/*   Updated: 2025/11/18 13:22:06 by ybel-maa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long int	temp;

	temp = n;
	if (temp < 0)
	{
		temp = temp * -1;
		ft_putchar_fd('-', fd);
	}
	if (temp > 9)
	{
		ft_putnbr_fd(temp / 10, fd);
	}
	ft_putchar_fd((temp % 10) + '0', fd);
}
