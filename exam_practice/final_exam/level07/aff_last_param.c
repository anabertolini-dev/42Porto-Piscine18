/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_last_param.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-cmar <ana-cmar@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/06 21:40:23 by ana-cmar          #+#    #+#             */
/*   Updated: 2026/10/06 21:47:55 by ana-cmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Write a program that takes strings as arguments and displays its last
	argument, followed by a newline.

	If no arguments are provided, the program displays a newline.

	Examples:

	$> ./aff_last_param "zaz" "mange" "des" "chats" | cat -e
	chats$
	$> ./aff_last_param "j'aime le savon" | cat -e
	j'aime le savon$
	$> ./aff_last_param
	$

*/

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc == 1)
	{
		write(1, "\n", 1);
		return (0);
	}
	while (argv[argc - 1][i] != '\0')
	{
		write(1, &argv[argc - 1][i], 1);
		i++;
	}
	write(1, "\n", 1);
	return (0);
}
