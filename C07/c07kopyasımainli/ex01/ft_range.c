/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fiilhan <fiilhan@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 12:17:35 by fiilhan           #+#    #+#             */
/*   Updated: 2023/08/02 19:37:36 by fiilhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*sonuc;
	int	i;

	if (min >= max)
	{
		sonuc = NULL;
		return (sonuc);
	}
	sonuc = (int *)malloc(sizeof(int) * (max - min));
	if (sonuc == NULL)
		return (0);
	i = 0;
	while (min != max)
	{
		sonuc[i] = min;
		++i;
		++min;
	}
	return (sonuc);
}
#include <stdio.h>
int main()
{
	int i = 0;
	while (i < 6)
	{
	printf("%d \n", ft_range(2,8)[i]);
	i++;
	}
}
