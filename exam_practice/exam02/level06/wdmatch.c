/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-cmar <ana-cmar@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/05 09:40:00 by ana-cmar          #+#    #+#             */
/*   Updated: 2026/10/05 09:43:31 by ana-cmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Write a program that takes two strings and checks whether it is
	possible to form the first string using characters from the second
	string, while preserving the order in which those characters appear
	in the second string.

	If it is possible, the program displays the first string followed
	by a newline. Otherwise, it displays only a newline.

	If the number of arguments is not 2, the program displays only
	a newline.

	Examples:

	$> ./wdmatch "faya" "fgvvfdxcacpolhyghbreda" | cat -e
	faya$
	$> ./wdmatch "faya" "fgvvfdxcacpolhyghbred" | cat -e
	$
	$> ./wdmatch | cat -e
	$
*/

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (argc == 3)
	{
		while (argv[2][j] != '\0' && argv[1][i] != '\0')
		{
			if (argv[1][i] == argv[2][j])
				i++;
			j++;
		}
		if (argv[1][i] == '\0')
		{
			i = 0;
			while (argv[1][i] != '\0')
			{
				write(1, &argv[1][i], 1);
				i++;
			}
		}
	}
	write(1, "\n", 1);
	return (0);
}
