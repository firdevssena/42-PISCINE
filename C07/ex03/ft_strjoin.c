/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fiilhan <fiilhan@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 17:09:04 by fiilhan           #+#    #+#             */
/*   Updated: 2023/08/02 19:41:28 by fiilhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		++i;
	}
	return (i);
}

char	*ft_strcpy(char *dest, char *src, int *i)
{
	int	j;
	int	k;

	j = 0;
	k = *i;
	while (src[j] != '\0')
	{
		dest[k++] = src[j++];
	}
	*i = k;
	return (dest);
}

int	find_size(int size, char **strs, char *sep)
{
	int	i;
	int	sum;
	int	sum1;

	i = 0;
	sum = 0;
	while (size > i)
		sum += ft_strlen(strs[i++]);
	sum1 = ft_strlen(sep);
	return (sum1 * (size - 1) + sum + 1);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		sum;
	int		a;
	char	*last;

	a = 0;
	i = 0;
	sum = find_size(size, strs, sep);
	if (!size)
		return ((char *)malloc(sizeof(char)));
	last = (char *)malloc(sizeof(char) * sum);
	if (!last)
		return (0);
	while (size > a)
	{
		ft_strcpy(last, strs[a], &i);
		if (size - 1 > a++)
			ft_strcpy(last, sep, &i);
	}
	last[i] = '\0';
	return (last);
}

#include <stdio.h>

int main()
{
	char	*str[2];
	str[0]="selam";
	str[1]="abc";
	printf("%s", ft_strjoin(2, str, ","));
}
