/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fiilhan <fiilhan@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 23:50:45 by fiilhan           #+#    #+#             */
/*   Updated: 2023/07/22 00:44:52 by fiilhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strncpy(char	*dest, char	*src, unsigned int	n)
{
	unsigned int	j;

	j = 0;
	while(j < n)
	{
	dest[j] = src[j];
	j++;
	}
	return (dest);
}

int main()
{
	char dizi1[] = "ben ilk diziyim ve benim devamımı yazdırman gerekiyır.";
	char dizi2[]="bende ikinci dizi";
	printf("%s",ft_strncpy(dizi1,dizi2,12));
}
