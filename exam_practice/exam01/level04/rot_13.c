/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-cmar <ana-cmar@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/04 16:41:22 by ana-cmar          #+#    #+#             */
/*   Updated: 2026/10/04 16:45:15 by ana-cmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Write a program that takes a string and displays it, replacing each
	letter with the letter 13 positions ahead in the alphabet.

	'z' becomes 'm' and 'Z' becomes 'M'. The case remains unchanged.

	The output must be followed by a newline.
	If the number of arguments is not 1, the program displays a newline.

	Examples:

	$> ./rot_13 "abc"
	nop
	$> ./rot_13 "AkjhZ zLKIJz , 23y " | cat -e
	NxwuM mYXVWm , 23l $
	$> ./rot_13 | cat -e
	$
	$>
*/

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i] != '\0')
		{
			if ((argv[1][i] >= 'A' && argv[1][i] <= 'M')
					|| argv[1][i] >= 'a' && argv[1][i] <= 'm')
			{
				argv[1][i] += 13;
			}
			else if ((argv[1][i] >= 'N' && argv[1][i] <= 'Z')
					|| argv[1][i] >= 'n' && argv[1][i] <= 'z')
			{
				argv[1][i] -= 13;
			}
			write (1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}
