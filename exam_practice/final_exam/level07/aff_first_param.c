/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_first_param.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-cmar <ana-cmar@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/06 21:35:00 by ana-cmar          #+#    #+#             */
/*   Updated: 2026/10/06 21:38:45 by ana-cmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Write a program that takes strings as arguments and displays the first
	argument, followed by a newline.
	
	If no arguments are provided, the program displays a newline.

	Examples:

	$> ./aff_first_param vincent mit "l'ane" d" vint | cat -e
	vincent$
	$> ./aff_first_param "j'aime le fromage de chevre" | cat -e
	j'aime le fromage de chevre$
	$> ./aff_first_param
	$
*/

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc == 1)
	{
		write(1, "\n", 1);
		return (0);
	}
	while (argv[1][i] != '\0')
	{
		write(1, &argv[1][i], 1);
		i++;
	}
	write(1, "\n", 1);
	return (0);
}
