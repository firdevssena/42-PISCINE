/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fiilhan <fiilhan@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 14:41:32 by fiilhan           #+#    #+#             */
/*   Updated: 2023/07/22 14:44:35 by fiilhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{

int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while(str[i])
	{
		if(('Z' >= str[i]) && (str[i] >= 'A'))
			return (1);	
		i++;
	}
		return(0);
	
}

int main()
{    char dizi[]="lkfhj";
printf("%d", ft_str_is_uppercase(dizi));


}
