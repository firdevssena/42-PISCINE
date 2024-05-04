/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fiilhan <fiilhan@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 18:18:27 by fiilhan           #+#    #+#             */
/*   Updated: 2023/07/25 09:49:42 by fiilhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>
#include <string.h>

char	*ft_strcat(char	*dest, char	*src)
{
	int	i;
	int	a;

	i = 0;
	a = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[a] != '\0')
	{
		dest[i] = src[a];
		a++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	main()
{
	char dizi1[30]= "Firdevs Sena";
	char dizi2[]= " ILHAN";
	printf("%s\n",ft_strcat(dizi1,dizi2));
	printf("%s\n",strcat(dizi1,dizi2));
}


