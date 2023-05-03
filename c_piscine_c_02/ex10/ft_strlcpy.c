/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbarbero <sbarbero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 16:16:32 by sbarbero          #+#    #+#             */
/*   Updated: 2023/05/03 19:15:21 by sbarbero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	cont;
	unsigned int	i;

	cont = 0;
	i = 0;
	while (src[cont])
		cont++;
	if (size < 1)
		return (cont);
	while (src[i] && i < (size - 1))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (cont);
}

// int	main(void)
// {
// 	char	src[] = "Source";
// 	char	dest[] = "";
// 	unsigned int	i;
// 	i = 4;
// 	printf("Antes.\nsrc: %s\ndest: %s\nsize: %d\n\n", src, dest, i);
// 	i = ft_strlcpy(dest, src, i);
// 	printf("Después.\nsrc: %s\ndest: %s\nsize: %d", src, dest, i);
// 	return (0);
// }