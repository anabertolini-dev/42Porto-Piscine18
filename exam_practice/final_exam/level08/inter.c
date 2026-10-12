/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-cmar <ana-cmar@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/06 21:53:41 by ana-cmar          #+#    #+#             */
/*   Updated: 2026/10/06 22:02:05 by ana-cmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Write a program that takes two strings and displays, without duplicates,
	the characters that appear in both strings, in the order in which they
	appear in the first string.

	The output must be followed by a newline.
	If the number of arguments is not 2, the program displays a newline.

	Examples:

	$> ./inter "padinton" "paqefwtdjetyiytjneytjoeyjnejeyj" | cat -e
	padinto$
	$> ./inter ddf6vewg64f gtwthgdwthdwfteewhrtag6h4ffdhsd | cat -e
	df6ewg4$
	$> ./inter "rien" "cette phrase ne cache rien" | cat -e
	rien$
	$> ./inter | cat -e
	$

*/

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	array[128] = {0};
	int	index;

	i = 0;
	if (argc == 3)
	{
		while (argv[2][i] != '\0')
		{
			index = argv[2][i];
			if (array[index] == 0)
				array[index] = 1;
			i++;
		}
		i = 0;
		while (argv[1][i] != '\0')
		{
			index = argv[1][i];
			if (array[index] == 1)
			{
				write(1, &argv[1][i], 1);
				array[index] = 0;
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
