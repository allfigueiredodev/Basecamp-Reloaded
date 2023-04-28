/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperis-p <aperis-p@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 16:22:57 by aperis-p          #+#    #+#             */
/*   Updated: 2023/04/27 20:44:33 by aperis-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

// int	main(void)
// {
// 	int	*div;
// 	int	*mod;
// 	int	divided;
// 	int	moded;

// 	div = &divided;
// 	mod = &moded;
// 	ft_div_mod(25, 3, div, mod);
// 	printf("%i %i", *div, *mod);
// }
