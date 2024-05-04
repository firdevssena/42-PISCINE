/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_rance.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fiilhan <fiilhan@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 13:45:40 by fiilhan           #+#    #+#             */
/*   Updated: 2023/08/02 19:42:14 by fiilhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;

	i = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = (int *)malloc(sizeof(int) * (max - min));
	if (!range)
		return (-1);
	while (min < max)
	{
		range[0][i] = min;
		++i;
		++min;
	}
	return (i);
}
#include <stdio.h>

int main()
{
	int	*str[100];
	printf("%d", ft_ultimate_range(str, 2, 4));
}
