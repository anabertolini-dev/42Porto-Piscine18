/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-cmar <ana-cmar@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/05 09:12:04 by ana-cmar          #+#    #+#             */
/*   Updated: 2026/10/05 09:15:26 by ana-cmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Create a function that displays the integer passed as a parameter.
	The function must be able to display all possible values of an int
	variable.

	Function prototype:

	void	ft_putnbr(int nb);
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
		n = n * (-1);
	}
	if (n >= 10)
	{
		ft_putnbr(n / 10);
	}
	str = (n % 10) + '0';
	write(1, &str, 1);
}
