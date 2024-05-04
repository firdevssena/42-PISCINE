/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fiilhan <fiilhan@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 14:10:07 by fiilhan           #+#    #+#             */
/*   Updated: 2023/07/31 14:17:50 by fiilhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	main(int argc, char **argv)
{
	int	x;
	int	y;

	x = argc - 1;
	while (x > 0)
	{
		y = 0;
		while (argv[x][y])
		{
			write (1, &argv[x][y], 1);
			y++;
		}
		write (1, "\n", 1);
		x--;
	}
}
