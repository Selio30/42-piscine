/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbarbero <sbarbero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 13:25:02 by sbarbero          #+#    #+#             */
/*   Updated: 2023/03/21 13:46:29 by sbarbero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// #include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	while (i < size - 1)
	{
		j = 0;
		while (j < (size - i - 1))
		{
			if (tab[j] > tab[j + 1])
			{
				temp = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = temp;
			}
			j++;
		}
		i++;
	}
}

// int main(void)
// {
//     int tab[] = {5,4,3,2,1,9,7,8,6};
//     ft_sort_int_tab(tab,9);
//     int i = 0;
//     for (size_t i = 0; i < 9; i++)
// 	{
// 		printf("%d", tab[i]);
// 	}
// }