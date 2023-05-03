/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbarbero <sbarbero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 13:16:49 by sbarbero          #+#    #+#             */
/*   Updated: 2023/03/21 16:01:21 by sbarbero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// #include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	aux;

	i = 0;
	size--;
	while (i < size)
	{
		aux = tab[i];
		tab[i] = tab[size];
		tab[size] = aux;
		i++;
		size--;
	}
}

// int	main(void)
// {
// 	int	num[] = {5,4,3,2,1};
// 	ft_rev_int_tab(num, 5);
// 	for (size_t i = 0; i < 5; i++)
// 	{
// 		printf("%i", num[i]);
// 	}
// }
