/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-cmar <ana-cmar@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/03 13:31:27 by ana-cmar          #+#    #+#             */
/*   Updated: 2026/10/03 13:34:45 by ana-cmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Write a function that reverses (in-place) a string.
	It must return its parameter.

	Your function must be declared as follows:

	char    *ft_strrev(char *str);
*/

char	*ft_strrev(char *str)
{
	int		i;
	int		size;
	char	temp;

	i = 0;
	while (str[i] != '\0')
		i++;
	size = i - 1;
	i = 0;
	while (i < size)
	{
		temp = str[i];
		str[i] = str[size];
		str[size] = temp;
		i++;
		size--;
	}
	return (str);
}
