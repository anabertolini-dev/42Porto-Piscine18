/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-cmar <ana-cmar@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/06 11:22:37 by ana-cmar          #+#    #+#             */
/*   Updated: 2026/09/06 11:24:43 by ana-cmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char	digits;

	digits = '0';
	while (digits <= '9')
	{
		write(1, &digits, 1);
		digits++;
	}
}

/*
int	main(void)
{
	ft_print_numbers();
	return (0);
}
*/
