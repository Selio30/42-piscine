/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbarbero <sbarbero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 13:42:05 by sbarbero          #+#    #+#             */
/*   Updated: 2023/05/03 19:03:12 by sbarbero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	w_num(char i, char j)
{
	write(1, &i, 1);
	write(1, &j, 1);
}

void	intswap(char i, char j)
{
	char	k;
	char	l;

	if (i <= 9)
	{
		k = i + 48;
		w_num('0', k);
	}
	else if (i <= j)
	{
		k = (i % 10) + 48;
		l = (i / 10) + 48;
		w_num(l, k);
	}
}

void	charswap(char i, char j)
{
	intswap(i, 98);
	write(1, " ", 1);
	intswap(j, 99);
	if (i != 98 || j != 99)
	{
		w_num(',', ' ');
	}
}

void	ft_print_comb2(void)
{
	char	i;
	char	j;

	i = 0;
	while (i <= 98)
	{
		j = i + 1;
		while (j <= 99)
		{
			charswap(i, j);
			j++;
		}
		i++;
	}
}

// int	main(int argc, char const *argv[])
// {
// 	ft_print_comb2();
// 	return (0);
// }
