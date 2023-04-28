/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperis-p <aperis-p@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 12:56:09 by aperis-p          #+#    #+#             */
/*   Updated: 2023/04/28 16:45:59 by aperis-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_count_if(char **tab, int (*f)(char*))
{
	int	counter;
	int	i;

	counter = 0;
	i = 0;
	while (tab[i])
	{
		if (f(tab[i]) != 0)
		{
			counter ++;
			i++;
		}
		else
		{
			return (counter);
		}
	}
	return (counter);
}

int	ft_rtr(char *str)
{
	if (str[0] != '0')
	{
		return (1);
	}
	return (0);
}

// int main (void)
// {
// 	char *test_array[] = {"qwe", "", "e", "0"};
// 	printf("%d", ft_count_if(test_array, ft_rtr));
// }