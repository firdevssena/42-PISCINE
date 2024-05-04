/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fiilhan <fiilhan@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 00:47:39 by fiilhan           #+#    #+#             */
/*   Updated: 2023/07/22 01:33:26 by fiilhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>


int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i])
	{
		if (('a' <= str[i] && str[i] <= 'z' ))
			return (1);
		else if ('Z' >= str[i] && str[i] >= 'A')
			return (1);
		i++;
	}
	return (0);
}

int	main()
{	char dizi[]="gfh";
	printf("%d", ft_str_is_alpha(dizi));
}
