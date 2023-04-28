/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperis-p <aperis-p@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 17:38:04 by aperis-p          #+#    #+#             */
/*   Updated: 2023/04/28 18:50:35 by aperis-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	fact;
	int	counter;

	fact = nb;
	counter = nb - 1;
	if (nb > 1 && nb < 12)
	{
		while (counter != 0)
		{
			fact = fact * counter;
			counter--;
		}
		return (fact);
	}
	return (0);
}

// int	main(void)
// {
// 	printf("%i", ft_iterative_factorial(13));
// }
