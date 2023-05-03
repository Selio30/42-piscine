/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbarbero <sbarbero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 15:19:08 by sbarbero          #+#    #+#             */
/*   Updated: 2023/03/28 16:11:38 by sbarbero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_lengh(char *str)
{
	int	cont;

	cont = 0;
	while (*str != '\0')
	{
		cont++;
		str++;
	}
	return (cont);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;

	i = ft_lengh(dest);
	while (*src != '\0')
	{
		dest[i] = *src;
		i++;
		src++;
	}
	dest[i] = '\0';
	return (dest);
}

// int	main(void)
// {
// 	char dest[20] = "Hello";
// 	char src[] = " world!";
// 	ft_strcat(dest, src);
// 	printf("%s", dest);
// }