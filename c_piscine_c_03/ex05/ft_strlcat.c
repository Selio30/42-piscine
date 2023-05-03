/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbarbero <sbarbero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 15:55:01 by sbarbero          #+#    #+#             */
/*   Updated: 2023/03/27 16:44:26 by sbarbero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_lengh(char *str)
{
	unsigned int	count;

	count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return (count);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	if (size <= ft_lengh(dest))
	{
		return (size + ft_lengh(src));
	}
	i = ft_lengh(dest);
	j = 0;
	while (src[j] != '\0' && i + 1 < size)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (ft_lengh(dest) + ft_lengh(&src[j]));
}

// int	main(void)
// {
// 	char dest[20] = "123";
// 	char src[] = "4567890";
// 	unsigned int size = 6;
// 	unsigned int result;

// 	result = ft_strlcat(dest, src, size);
// 	printf ("%s\n%d", dest, result);
// }