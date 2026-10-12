/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-cmar <ana-cmar@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/05 09:01:49 by ana-cmar          #+#    #+#             */
/*   Updated: 2026/10/05 09:04:15 by ana-cmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Write a program that takes a string and reverses the case of all its
	letters. Other characters remain unchanged.

	Display the result followed by a newline.
	If the number of arguments is not 1, the program displays a newline.

	Examples:

	$> ./ulstr "L'eSPrit nE peUt plUs pRogResSer" | cat -e
	l'EspRIT Ne PEuT PLuS PrOGrESsER$
	$> ./ulstr | cat -e
	$

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
			if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
				argv[1][i] += 32;
			else if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
				argv[1][i] -= 32;
			write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
