/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fiilhan <fiilhan@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 09:15:03 by fiilhan           #+#    #+#             */
/*   Updated: 2023/07/31 09:51:28 by fiilhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	else	
		return (ft_recursive_factorial(nb - 1) * nb);
}
#include <stdio.h>
int main()
{
	printf("%d",ft_recursive_factorial(-5));
}
