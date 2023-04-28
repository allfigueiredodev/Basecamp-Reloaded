/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperis-p <aperis-p@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 12:13:22 by aperis-p          #+#    #+#             */
/*   Updated: 2023/04/27 21:00:10 by aperis-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb)
{	
	int	fact;

	if (nb == 1)
	{
		return (1);
	}
	else
	{
		fact = nb * ft_recursive_factorial(nb - 1);
		return (fact);
	}
}

// int main(void)
// {
// 	printf("%i", ft_recursive_factorial(16));
// }