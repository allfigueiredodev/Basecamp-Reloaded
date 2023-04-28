/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperis-p <aperis-p@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 13:57:10 by aperis-p          #+#    #+#             */
/*   Updated: 2023/04/27 21:13:51 by aperis-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	i;
	int	result;

	i = 1;
	result = 1;
	if (nb == 0 || nb == 1)
		return (nb);
	while (result <= nb)
	{
		i++;
		result = i * i;
		if (result == nb)
		{
			return (i);
		}
	}
	return (0);
}

// int	main(void)
// {
// 	printf("%d\n", ft_sqrt(3));
// 	printf("%d", ft_sqrt(129740411));
// }
