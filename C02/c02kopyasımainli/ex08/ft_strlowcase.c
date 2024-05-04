/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fiilhan <fiilhan@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 15:16:54 by fiilhan           #+#    #+#             */
/*   Updated: 2023/07/22 15:18:49 by fiilhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char	*ft_strlowcase(char	*str)
{

int i;

	i = 0;
	while(str[i])
	{
		if(('Z' >= str[i]) && (str[i] >= 'A'))
			str[i] = str[i] + 32;
		i++;
	}
	return(str);
}
int main()
{
  char dizi[]="ABCDE";
 	printf("%s", ft_strlowcase(dizi));
	  }

