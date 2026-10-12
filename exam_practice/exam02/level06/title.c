/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   title.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-cmar <ana-cmar@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/05 09:31:02 by ana-cmar          #+#    #+#             */
/*   Updated: 2026/10/05 09:35:42 by ana-cmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Write a program that takes one or more strings and, for each argument,
	converts the first character of each word to uppercase if it is a
	lowercase letter, then prints the string followed by a newline.

	A word is a section of a string delimited by spaces, tabs, or the
	beginning or end of the string. If a word contains only one letter,
	that letter must be capitalized.

	If there are no arguments, display only a newline.

	Examples:

	$> ./title | cat -e
	$
	$> ./title "hello WORLD"
	Hello WORLD
	$> ./title "one two three"
	One Two Three
*/

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			if (j == 0 || argv[i][j - 1] == ' ' || argv[i][j - 1] == '\t')
			{
				if (argv[i][j] >= 'a' && argv[i][j] <= 'z')
				{
					argv[i][j] -= 32;
				}
			}
			write(1, &argv[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
	if (argc == 1)
		write(1, "\n", 1);
	return (0);
}
