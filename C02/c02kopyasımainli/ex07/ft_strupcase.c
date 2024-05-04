/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fiilhan <fiilhan@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 15:02:42 by fiilhan           #+#    #+#             */
/*   Updated: 2023/07/22 15:15:51 by fiilhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

char	*ft_strupcase(char	*str)
{
	int i;

	i = 0;
	while(str[i])
	{
		if(('z' >= str[i]) && (str[i] >= 'a'))
			str[i] = str[i] - 32;
		i++;
	}
	return(str);
}

int main()
{
  char dizi[]="abC";
 	printf("%s", ft_strupcase(dizi));
	  }
