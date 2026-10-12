/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   occ_a.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-cmar <ana-cmar@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/06 20:02:49 by ana-cmar          #+#    #+#             */
/*   Updated: 2026/10/06 20:04:35 by ana-cmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Write a function that takes a string and returns how many times it
	encounters 'A'.

	The function should be declared as follows:

	int occ_a(char *str);
*/

int	occ_a(char *str)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		if (str[i] == 'A')
			count++;
		i++;
	}
	return (count);
}
