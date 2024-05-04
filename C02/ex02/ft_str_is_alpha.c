/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fiilhan <fiilhan@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 00:47:39 by fiilhan           #+#    #+#             */
/*   Updated: 2023/07/22 15:44:02 by fiilhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i])
	{
		if ('a' <= str[i] && str[i] <= 'z' )
			i++;
		else if ('Z' >= str[i] && str[i] >= 'A')
			i++;
		else
			return (0);
	}
	return (1);
}
