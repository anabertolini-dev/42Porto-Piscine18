/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-cmar <ana-cmar@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/06 11:16:58 by ana-cmar          #+#    #+#             */
/*   Updated: 2026/09/06 11:18:40 by ana-cmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	alphabet;

	alphabet = 'a';
	while (alphabet < 'z' + 1)
	{
		write (1, &alphabet, 1);
		alphabet++;
	}
}

/*
int	main(void)
{
	ft_print_alphabet();
	return (0);
}
*/
