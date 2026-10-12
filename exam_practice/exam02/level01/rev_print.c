/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-cmar <ana-cmar@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/05 08:20:09 by ana-cmar          #+#    #+#             */
/*   Updated: 2026/10/05 08:22:46 by ana-cmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Write a program that takes a string, and displays the string in reverse
	followed by a newline.

	If the number of parameters is not 1, the program displays a newline.

	Examples:
	
	$> ./rev_print "ana" | cat -e
	ana$
	$> ./rev_print "pisc_INE" | cat -e
	ENIc_sip$
	$> ./rev_print | cat -e
	$
*/

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc != 2)
	{
		write (1, "\n", 1);
		return (0);
	}
	while (argv[1][i] != '\0')
		i++;
	i--;
	while (i >= 0)
	{
		write (1, &argv[1][i], 1);
		i--;
	}
	write (1, "\n", 1);
	return (0);
}
