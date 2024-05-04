/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fiilhan <fiilhan@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 12:58:43 by fiilhan           #+#    #+#             */
/*   Updated: 2023/07/22 14:40:46 by fiilhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

int	ft_str_is_lowercase(char	*str)
{
	int i;

	i = 0;
	if (str[i] == '\0')
		return (1);

	while (str[i])
		{
		if('z' >= str[i] && str[i] >= 'a')
			return(1);
		i++;
		}
	return(0);	
}

int	main()
{
    char dizi[]="04597";
printf("%d", ft_str_is_lowercase(dizi));
}
