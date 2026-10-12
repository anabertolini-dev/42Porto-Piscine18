/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-cmar <ana-cmar@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/06 22:16:59 by ana-cmar          #+#    #+#             */
/*   Updated: 2026/10/06 22:22:28 by ana-cmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Write a program that takes a string and displays its last word,
	followed by a newline.

	A word is a section of the string delimited by spaces, tabs, or
	the beginning or end of the string.

	If the number of arguments is not 1, or there are no words,
	display only a newline.

	Examples:

	$> ./last_word "FOR PONY" | cat -e
	PONY$
	$> ./last_word "   " | cat -e
	$
	$> ./last_word "a" "b" | cat -e
	$
*/

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	end;

	i = 0;
	end = 0;
	if (argc == 2)
	{
		while (argv[1][i] != '\0')
			i++;
		i--;
		while (i >= 0 && (argv[1][i] == ' ' || argv[1][i] == '\t'))
			i--;
		end = i;
		while (i >= 0 && argv[1][i] != ' ' && argv[1][i] != '\t')
			i--;
		i++;
		while (i <= end)
		{
			write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
