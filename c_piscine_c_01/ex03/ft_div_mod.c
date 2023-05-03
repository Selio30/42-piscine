/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbarbero <sbarbero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 20:04:03 by sbarbero          #+#    #+#             */
/*   Updated: 2023/03/21 13:47:11 by sbarbero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// #include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

// int	main(void)
// {
// 	int	i = 452;
// 	int	j = 88;
// 	int	div = 0;
// 	int	mod = 0;
// 	printf("%d\n", div);
// 	printf("%d\n\n", mod);
// 	ft_div_mod(i, j, &div, &mod);
// 	printf("%d\n", div);
// 	printf("%d\n", mod);
// }