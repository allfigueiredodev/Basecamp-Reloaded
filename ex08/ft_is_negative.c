/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperis-p <aperis-p@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 15:27:17 by aperis-p          #+#    #+#             */
/*   Updated: 2023/04/28 15:17:44 by aperis-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char str);

void	ft_is_negative(int n)
{
	char	negative;
	char	positive;

	negative = 'N';
	positive = 'P';
	if (n >= 0)
	{
		ft_putchar(positive);
	}
	else
	{
		ft_putchar(negative);
	}
}

// int main(void)
// {
// 	ft_is_negative(-1);
// }