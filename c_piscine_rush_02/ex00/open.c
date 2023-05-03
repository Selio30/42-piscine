/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   open.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: navazque <navazque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 20:20:17 by navazque          #+#    #+#             */
/*   Updated: 2023/03/26 22:12:42 by navazque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	main(void)
{
	int fd;
	char buf[10];
	ssize_t nr_bytes;

	fd = open("numbers.dict", O_RDONLY);
	if (fd == -1)
	{
		printf("Error \n");
	}
	else
	{
		nr_bytes = read(fd, buf, 5);
		close(fd);
		if (fd == 0)
	 	{
			printf("vacío \n");
		}
		else
		{
			printf("%d, %s \n", (int)nr_bytes, buf);
		}
	}
	return(0);
}
