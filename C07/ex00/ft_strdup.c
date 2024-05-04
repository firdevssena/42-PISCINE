/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fiilhan <fiilhan@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 08:28:38 by fiilhan           #+#    #+#             */
/*   Updated: 2023/08/02 19:35:37 by fiilhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*kopya;
	int		i;

	i = 0;
	while (src[i] != '\0')
		++i;
	kopya = (char *)malloc(sizeof(char) * (i + 1));
	if (!kopya)
		return (0);
	i = 0;
	while (src[i] != '\0')
	{
		kopya[i] = src[i];
		++i;
	}
	kopya[i] = '\0';
	return (kopya);
}
#include <stdio.h>

int main()
{
	char dizi[]="selam";
	printf("%s", ft_strdup(dizi));
}
