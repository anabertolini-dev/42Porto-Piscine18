/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_alpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-cmar <ana-cmar@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/03 12:32:44 by ana-cmar          #+#    #+#             */
/*   Updated: 2026/10/03 12:35:23 by ana-cmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Write a program that displays the alphabet, with even-positioned
	letters in uppercase and odd-positioned letters in lowercase,
	followed by a newline.

	Example:
	$> ./maff_alpha | cat -e
	aBcDeFgHiJkLmNoPqRsTuVwXyZ$
*/

#include <unistd.h>

int	main(void)
{
	char	alphabet;

	alphabet = 'a';
	while (alphabet <= 'z')
	{
		if ((alphabet - 'a') % 2 == 1)
			alphabet = alphabet - 32;
		write(1, &alphabet, 1);
		if (alphabet >= 'A' && alphabet <= 'Z')
			alphabet = alphabet + 32;
		alphabet++;
	}
	write(1, "\n", 1);
	return (0);
}
