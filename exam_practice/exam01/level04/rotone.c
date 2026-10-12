/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-cmar <ana-cmar@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/04 16:46:00 by ana-cmar          #+#    #+#             */
/*   Updated: 2026/10/04 16:48:24 by ana-cmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Write a program that takes a string and displays it, replacing each
	letter with the next letter in alphabetical order.

	'z' becomes 'a' and 'Z' becomes 'A'. The case remains unchanged.

	The output must be followed by a newline.
	If the number of arguments is not 1, the program displays a newline.

	Examples:

	$> ./rotone "abc"
	bcd
	$> ./rotone "AkjhZ zLKIJz , 23y " | cat -e
	BlkiA aMLJKa , 23z $
	$> ./rotone "" | cat -e
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
			if ((argv[1][i] >= 'A' && argv[1][i] < 'Z')
					|| (argv[1][i] >= 'a' && argv[1][i] < 'z'))
				argv[1][i] += 1;
			else if (argv[1][i] == 'Z')
				argv[1][i] = 'A';
			else if (argv[1][i] == 'z')
				argv[1][i] = 'a';
			write (1, &argv[1][i], 1);
			i++;
		}
	}
	write (1, "\n", 1);
	return (0);
}
