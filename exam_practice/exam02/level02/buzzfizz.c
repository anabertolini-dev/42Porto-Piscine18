/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   buzzfizz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-cmar <ana-cmar@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/05 08:27:35 by ana-cmar          #+#    #+#             */
/*   Updated: 2026/10/05 08:30:41 by ana-cmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Write a program that prints the numbers from 1 to 100, each followed by
	a newline.
	
	If a number is a multiple of 4, print "buzz" instead.
	If a number is a multiple of 7, print "fizz" instead.

	If a number is a multiple of both 4 and 7, print "buzzfizz" instead.

*/

#include <unistd.h>

void	ft_putnbr(int nb)
{
	long	n;
	char	str;

	n = nb;
	if (n < 0)
	{
		write(1, "-", 1);
		n = -n;
	}
	if (n >= 10)
		ft_putnbr(n / 10);
	str = (n % 10) + '0';
	write(1, &str, 1);
}

int	main(void)
{
	int	i;

	i = 1;
	while (i <= 100)
	{
		if (i % 4 == 0 && i % 7 == 0)
			write(1, "buzzfizz", 8);
		else if (i % 4 == 0)
			write(1, "buzz", 4);
		else if (i % 7 == 0)
			write(1, "fizz", 4);
		else
			ft_putnbr(i);
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
