/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fiilhan <fiilhan@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 17:03:49 by fiilhan           #+#    #+#             */
/*   Updated: 2023/07/20 17:12:19 by fiilhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

void	swap(int	*x, int	*y)
{
	int change;
	change = *x;
	*x = *y;
	*y = change;
}

void	ft_sort_int_tab(int	*tab, int	size)
{
	int	i;
	int	y;

	i = 0;
	y = 0;
	while(y < size - 1)
	{	
		i = 0;
		while(i < size - y - 1)
		{
			if (tab[i] > tab[i + 1])
			{
			swap(&tab[i + 1], &tab[i]);
			
			}
			i++;
		}
	y++;
	}

}

int	main(void)
{
	int tab[]={365,55,35,786,98};
	ft_sort_int_tab(tab, 5);
	int a = 0;
	while (a < 5)
	{
		printf("%d," ,tab[a]);
		a++;
	}
}
