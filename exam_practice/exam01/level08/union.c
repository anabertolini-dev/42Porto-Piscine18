/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-cmar <ana-cmar@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/04 17:44:43 by ana-cmar          #+#    #+#             */
/*   Updated: 2026/10/04 17:47:08 by ana-cmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Write a program that takes two strings and displays, without
	duplicates, the characters that appear in either string.

	The characters must be displayed in the order in which they appear
	in the command-line arguments, followed by a newline.

	If the number of arguments is not 2, the program displays only
	a newline.

	Examples:

	$> ./union zpadinton "paqefwtdjetyiytjneytjoeyj" | cat -e
	zpadintoqefwjy$
	$> ./union "rien" "cette phrase ne cache rien" | cat -e
	rienct phas$
	$> ./union | cat -e
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
		while (argv[1][i] != '\0')
		{
			index = argv[1][i];
			if (array[index] == 0)
			{
				write(1, &argv[1][i], 1);
				array[index] = 1;
			}
			i++;
		}
		i = 0;
		while (argv[2][i] != '\0')
		{
			index = argv[2][i];
			if (array[index] == 0)
			{
				write(1, &argv[2][i], 1);
				array[index] = 1;
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
