/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-cmar <ana-cmar@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/04 16:10:22 by ana-cmar          #+#    #+#             */
/*   Updated: 2026/10/04 16:16:09 by ana-cmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Write a program called alpha_mirror that takes a string and displays this
	string after replacing each alphabetical character with the opposite
	alphabetical character, followed by a newline.

	'a' becomes 'z', 'Z' becomes 'A'
	'd' becomes 'w', 'M' becomes 'N'

	and so on.
	Case is not changed.

	If the number of arguments is not 1, display only a newline.

	Examples:

	$> ./alpha_mirror "abc"
	zyx
	$> ./alpha_mirror "My horse is Amazing." | cat -e
	Nb slihv rh Znzarmt.$
	$> ./alpha_mirror | cat -e
	$
	$>
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
	{
		if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
			argv[1][i] = 'a' + 'z' - argv[1][i];
		else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
			argv[1][i] = 'A' + 'Z' - argv[1][i];
		write (1, &argv[1][i], 1);
		i++;
	}
	write (1, "\n", 1);
	return (0);
}
