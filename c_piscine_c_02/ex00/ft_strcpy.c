/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbarbero <sbarbero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 16:42:25 by sbarbero          #+#    #+#             */
/*   Updated: 2023/03/21 19:27:31 by sbarbero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

// int	main(void)
// {
// 	char	src[] = "Source string.";
// 	char	destin[] = "Destination string.";
// 	char	*dest;
// 	printf("Antes:\nstc: %s\ndest: %s\n", src, destin);
// 	dest = ft_strcpy(destin, src);
// 	printf("Despues:\nstc: %s\ndest: %s\n", src, dest);
// }