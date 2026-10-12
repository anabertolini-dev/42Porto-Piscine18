/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_alen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-cmar <ana-cmar@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/05 09:04:47 by ana-cmar          #+#    #+#             */
/*   Updated: 2026/10/05 09:06:28 by ana-cmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Write a function that returns the length of a string up to an 'a'.

	If 'a' doesn't exist in the string, it will simply return the length of
	the whole string.

	Your function must be declared as follows:

	int    count_alen(char *str);
*/

int	count_alen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == 'a')
			return (i);
		i++;
	}
	return (i);
}
