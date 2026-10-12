/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-cmar <ana-cmar@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/05 09:27:36 by ana-cmar          #+#    #+#             */
/*   Updated: 2026/10/05 09:30:14 by ana-cmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Write a program called search_and_replace that takes three arguments.
	The first argument is a string in which every occurrence of a character
	(the second argument) must be replaced by another character (the third
	argument).

	If the number of arguments is not 3, display only a newline.

	If the second argument does not contain exactly one character, or the
	third argument does not contain exactly one character, display only a
	newline.

	If the character to replace does not appear in the string, display the
	original string followed by a newline.

	Examples:

	$> ./search_and_replace "Papache est un sabre" "a" "o"
	Popoche est un sobre
	$> ./search_and_replace "zaz" "r" "u" | cat -e
	zaz$
*/

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc == 4)
	{
		if (argv[2][0] != '\0' && argv[2][1] == '\0')
		{
			if (argv[3][0] != '\0' && argv[3][1] == '\0')
			{
				while (argv[1][i] != '\0')
				{
					if (argv[1][i] == argv[2][0])
						write(1, &argv[3][0], 1);
					else
						write(1, &argv[1][i], 1);
					i++;
				}
			}
		}
	}
	write(1, "\n", 1);
	return (0);
}
