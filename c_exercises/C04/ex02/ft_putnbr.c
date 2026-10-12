/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-cmar <ana-cmar@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/13 17:07:00 by ana-cmar          #+#    #+#             */
/*   Updated: 2026/09/13 17:48:00 by ana-cmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putnbr(int nb)
{
	long	n;
	char	str;

	n = nb;
	if (n < 0)
	{
		write(1, "-", 1);
		n = n * (-1);
	}
	if (n >= 10)
	{
		ft_putnbr(n / 10);
	}
	str = (n % 10) + '0';
	write(1, &str, 1);
}
/*
int	main(void)
{
	ft_putnbr(-2147483648);
	return (0);
}
*/
