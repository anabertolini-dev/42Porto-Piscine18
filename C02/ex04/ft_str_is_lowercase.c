/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-cmar <ana-cmar@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/08 20:39:42 by ana-cmar          #+#    #+#             */
/*   Updated: 2026/09/08 20:44:14 by ana-cmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			i++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}

/*#include <stdio.h>
int	main(void){
	printf("%d\n", ft_str_is_lowercase("anacmar"));
	printf("%d\n", ft_str_is_lowercase("ana&piscine"));
	printf("%d\n", ft_str_is_lowercase(""));
	return (0);
}
*/
