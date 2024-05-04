/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fiilhan <fiilhan@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 23:11:35 by fiilhan           #+#    #+#             */
/*   Updated: 2023/07/29 00:11:00 by fiilhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char    *ft_strcapitalize(char *str)
{
    int f;
	int i;

    f = 0;
	i = 0;
   
while(str[i])
{
	if (f == 0 && 'z' >= str[i] && str[i] >= 'a')
		str[i] -= 32;
	else if(f == 1 && 'Z' >= str[i] && str[i] >= 'A')
		str[i] += 32;



}




	return (str);
}
