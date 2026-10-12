/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-cmar <ana-cmar@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/06 20:39:57 by ana-cmar          #+#    #+#             */
/*   Updated: 2026/10/06 20:44:32 by ana-cmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Write a program that prints the numbers from 1 to 100, each followed by
	a newline.

	If a number is a multiple of 3, print "fizz" instead.
	If a number is a multiple of 5, print "buzz" instead.
	If a number is a multiple of both 3 and 5, print "fizzbuzz" instead.

	Example:

	$> ./fizzbuzz
	1
	2
	fizz
	4
	buzz
	fizz
	7
	[...]
	98
	fizz
	buzz
	$>

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
		if (i % 3 == 0 && i % 5 == 0)
			write(1, "fizzbuzz", 8);
		else if (i % 3 == 0)
			write(1, "fizz", 4);
		else if (i % 5 == 0)
			write(1, "buzz", 4);
		else
			ft_putnbr(i);
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
