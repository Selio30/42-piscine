/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbarbero <sbarbero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 16:13:07 by sbarbero          #+#    #+#             */
/*   Updated: 2023/03/27 20:26:13 by sbarbero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	int				diff;

	i = 0;
	diff = 0;
	while ((i < n) && !diff && (s1[i] != '\0') && (s2[i] != '\0'))
	{
		diff = s1[i] - s2[i];
		i++;
	}
	if (i < n && !diff && (s1[i] == '\0' || s2[i] == '\0'))
	{
		diff = s1[i] - s2[i];
	}
	return (diff);
}

// int	main(void)
// {
// 	char s1[] = "A bueno adios master";
// 	char s2[] = "Son robots";
// 	char s3[] = "No se que poner aquí";
// 	printf("%d", ft_strncmp(s2, s3, 5));
// 	printf("\n%d", strncmp(s2, s3, 5));
// }