/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-cmar <ana-cmar@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/09 19:45:07 by ana-cmar          #+#    #+#             */
/*   Updated: 2026/09/09 20:02:00 by ana-cmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	check_char(char c)
{
	if ((c >= 'a' && c <= 'z')
		|| (c >= 'A' && c <= 'Z')
		|| (c >= '0' && c <= '9'))
	{
		return (1);
	}
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (check_char(str[i]))
		{
			if (i == 0 || !check_char(str[i - 1]))
			{
				if (str[i] >= 'a' && str[i] <= 'z')
					str[i] = str[i] - 32;
			}
			else
			{
				if (str[i] >= 'A' && str[i] <= 'Z')
					str[i] = str[i] + 32;
			}
		}
		i++;
	}
	return (str);
}
/*
#include <stdio.h>
int	main(void){

	char str1[]= "ola, tudo bem? 42palavras quarenta-e-duas";
	char str2[]= "ana, conseguiu entrar na-piscine";
	
	printf("%s\n", ft_strcapitalize(str1));
	printf("%s\n", ft_strcapitalize(str2));
	return (0);
}
*/
