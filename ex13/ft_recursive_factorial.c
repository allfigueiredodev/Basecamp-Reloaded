/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperis-p <aperis-p@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 12:13:22 by aperis-p          #+#    #+#             */
/*   Updated: 2023/04/28 19:09:12 by aperis-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb)
{	
	int	fact;

	if (nb == 1 || nb == 0)
	{
		return (1);
	}
	else if (nb > 12)
	{
		return (0);
	}
	else
	{
		fact = nb * ft_recursive_factorial(nb - 1);
	}
	return (fact);
}

// int main(void)
// {
// 	printf("%i", ft_recursive_factorial(0));
// }