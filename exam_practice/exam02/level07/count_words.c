/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_words.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-cmar <ana-cmar@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/05 09:44:20 by ana-cmar          #+#    #+#             */
/*   Updated: 2026/10/05 09:46:43 by ana-cmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Write a function that counts the words in the given string.

	A word is a section of the string delimited by spaces, tabs, or the
	beginning or end of the string.

	The function must be declared as follows:

	int	count_words(char *str);
*/

int	count_words(char *str)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		if (str[i] != ' ' && str[i] != '\t'
			&& (i == 0 || str[i - 1] == ' '
				|| str[i - 1] == '\t'))
			count++;
		i++;
	}
	return (count);
}
