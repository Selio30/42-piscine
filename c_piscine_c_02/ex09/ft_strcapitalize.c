/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbarbero <sbarbero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 13:51:26 by sbarbero          #+#    #+#             */
/*   Updated: 2023/03/27 17:05:56 by sbarbero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < '[' && str[i] > '@')
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	j;

	ft_strlowcase(str);
	i = 0;
	while (str[i] != '\0')
	{
		j = i - 1;
		if ((str[j] < '9' && str[j] > 'a') || (str[j] < '0') || i == 0)
		{
			if (str[i] < '{' && str[i] >= 'a')
			{
				str[i] = str[i] - 32;
			}
		}
		i++;
	}
	return (str);
}

// int	main(void)
// {
// 	char c[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
// 	char *i;
// 	i = c;
// 	printf("%s\n", ft_strcapitalize(i));
// }