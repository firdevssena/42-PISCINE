/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fiilhan <fiilhan@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 22:24:31 by fiilhan           #+#    #+#             */
/*   Updated: 2023/07/19 13:22:53 by fiilhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	x;

	x = *a;
	*a = *a / *b;
	*b = x % *b;
}

int	main(void)
{
	int	a = 20;
	int	b = 6;
	ft_ultimate_div_mod(&a,&b);
	printf("a'nin b'ye bölümü: %d\n, bölümünden kalanı: %d\n", a ,b);
}
