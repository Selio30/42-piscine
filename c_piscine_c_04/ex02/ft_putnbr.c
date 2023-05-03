/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbarbero <sbarbero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 18:54:43 by sbarbero          #+#    #+#             */
/*   Updated: 2023/04/19 12:34:49 by sbarbero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	w_num(char i)
{
	write(1, &i, 1);
}

void	ft_putnbr(int nb)
{
	unsigned int	num;

	if (nb < 0)
	{
		w_num('-');
		nb = -nb;
	}
	num = nb;
	if (num > 9)
	{
		ft_putnbr(num / 10);
		num %= 10;
	}
	w_num(num + '0');
}

// int	main(void)
// {
// 	ft_putnbr(42);
// }