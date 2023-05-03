/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbarbero <sbarbero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 19:57:10 by sbarbero          #+#    #+#             */
/*   Updated: 2023/03/21 13:47:16 by sbarbero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// #include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	aux;

	aux = *a;
	*a = *b;
	*b = aux;
}

// int	main(void)
// {
// 	int	i = 21;
// 	int	j = 42;
// 	printf("%d", i);
// 	printf("%d\n", j);
// 	ft_swap(&i, &j);
// 	printf("%d", i);
// 	printf("%d\n", j);
// }