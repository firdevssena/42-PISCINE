/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fiilhan <fiilhan@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 15:19:34 by fiilhan           #+#    #+#             */
/*   Updated: 2023/07/22 04:03:53 by fiilhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

void	ft_rev_int_tab(int	*tab, int size)
{
	int	i;
	int	temp;

	i = 0;
	while (i < (size / 2))
	{
		temp = tab[i];
		tab[i] = tab[size -1 - i];
		tab[size - i -1] = temp;
		i++;
	}
}

int main()
{
int dizi1[]={1,54,765,4,62};
ft_rev_int_tab(dizi1, 5);
int i = 0;
while(i < 5)
{
printf("%d,", dizi1[i]);
i++;
}
}
