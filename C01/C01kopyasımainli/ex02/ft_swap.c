/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fiilhan <fiilhan@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 15:57:43 by fiilhan           #+#    #+#             */
/*   Updated: 2023/07/19 13:05:13 by fiilhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	change;

	change = *a;
	*a = *b;
	*b = change;
}

int	main(void)
{
	int	a;
	int	b;

	a = 3;
	b = 5;
	printf("a ve b 'nin ilk değerleri: %d %d \n", a, b);
	ft_swap(&a, &b);
	printf("a ve b 'nin son değerleri: %d %d \n", a, b);
	return (0);
}
