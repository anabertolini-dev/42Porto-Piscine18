/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   write_string.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-cmar <ana-cmar@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/04 15:56:09 by ana-cmar          #+#    #+#             */
/*   Updated: 2026/10/04 15:57:35 by ana-cmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Write a function that displays a string on the standard output.
	
	The pointer passed to the function contains the address of the string's first
	character.
	
	Your function must be declared as follows:

	void	write_string(char *str);
*/

#include <unistd.h>

void	write_string(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}
