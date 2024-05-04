/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fiilhan <fiilhan@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 10:26:29 by fiilhan           #+#    #+#             */
/*   Updated: 2023/07/21 13:46:46 by fiilhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

char	*ft_strcpy(char	*dest, char	*src)
{
	int	j;

	j = 0;
	while(src[j])
	{
	dest[j] = src[j];
	j++;
	}
	dest[j] = '\0';
	return (dest);

}

int main(void)
{
	char dizi[]="merhaba ben ilk dizi";
	char dizi2[]="merhaba ben ikinci dizi";
	printf("%s", ft_strcpy(dizi,dizi2));

}

