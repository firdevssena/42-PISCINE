/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fiilhan <fiilhan@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 14:48:19 by fiilhan           #+#    #+#             */
/*   Updated: 2023/07/22 15:22:57 by fiilhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdio.h>
int	ft_str_is_printable(char	*str)

{

	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while(str[i])
	{
		if((127 >= str[i]) && (str[i] >= 32))
			return (1);	
		i++;
	}
		return(0);
}

int	main()
{
  char dizi[]="dk";
	printf("%d", ft_str_is_printable(dizi));
}
