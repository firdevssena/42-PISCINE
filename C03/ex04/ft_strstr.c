/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fiilhan <fiilhan@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 20:11:12 by fiilhan           #+#    #+#             */
/*   Updated: 2023/07/25 09:56:35 by fiilhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strstr(char	*str, char	*to_find)
{
	int	i;
	int	a;

	a = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[a])
	{
		i = 0;
		while (to_find[i] == str[a + i])
		{
			if (to_find[i + 1] == '\0')
				return (&str[a]);
			i++;
		}
		a++;
	}
	return (0);
}
