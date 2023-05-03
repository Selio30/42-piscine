/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbarbero <sbarbero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 20:07:52 by sbarbero          #+#    #+#             */
/*   Updated: 2023/03/21 13:47:05 by sbarbero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// #include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}

// int	main(void)
// {
// 	int	i = 452;
// 	int	j = 88;
// 	ft_ultimate_div_mod(&i, &j);
// 	printf("%d\n", i);
// 	printf("%d\n", j);
// }