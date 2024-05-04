/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fiilhan <fiilhan@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 14:05:00 by fiilhan           #+#    #+#             */
/*   Updated: 2023/07/31 09:31:13 by fiilhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_sqrt(int nb)
{
	int	i;

	i = 0;
	if (nb <= 0)
		return (0);
	else if (nb == 1)
		return (1);
	while (i * i  <= nb)
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	return (0);
}
#include <stdio.h>
int main()
{
	printf("%d", ft_sqrt(9));
}
