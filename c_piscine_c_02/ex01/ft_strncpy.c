/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbarbero <sbarbero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 14:02:10 by sbarbero          #+#    #+#             */
/*   Updated: 2023/03/21 19:27:24 by sbarbero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((src[i] != '\0') && (i < n))
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

// int	main(void)
// {
// 	char	src[] = "Source string.";
// 	char	dest[] = "Destination string.";
// 	unsigned int	i;
// 	i = 3;
// 	printf("Antes:\nstc: %s\ndest: %s\n", src, dest);
// 	ft_strncpy(dest, src, i);
// 	printf("Despues:\nstc: %s\ndest: %s\n", src, dest);
// }