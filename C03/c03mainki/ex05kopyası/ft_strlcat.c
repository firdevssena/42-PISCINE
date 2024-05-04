/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fiilhan <fiilhan@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 21:30:51 by fiilhan           #+#    #+#             */
/*   Updated: 2023/07/25 09:39:19 by fiilhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>
#include <string.h>
int	ft_strlen(char	*str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char	*dest, char	*src, unsigned int size)
{
	unsigned int	i;
	unsigned int	a;
	unsigned int	lend;
	unsigned int	lens;

	i = 0;
	a = 0;
	while (dest[i])
	{
		i++;
	}
	lend = i;
	lens = ft_strlen(src);
	if (size == 0 || size <= lend)
		return (lens + size);
	while (src[a] != '\0' && a < size - lend - 1)
	{
		dest[i] = src[a];
		i++;
		a++;
	}
	dest[i] = '\0';
	return (lend + lens);
int	main()
{
	char dizi1[100]= "firdevs sena";
	char dizi2[]= "ilhan";
	printf("%u\n",ft_strlcat(dizi1,dizi2,2));
//	printf("%lu\n",strlcat(dizi1,dizi2,2));
}
