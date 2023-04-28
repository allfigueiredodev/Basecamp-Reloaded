/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperis-p <aperis-p@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 19:23:29 by aperis-p          #+#    #+#             */
/*   Updated: 2023/04/28 14:36:40 by aperis-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	i = 0;
	while (i < length)
	{
		f(tab[i]);
		i++;
	}
}

// void	print_int(int n)
// {
// 	printf("%d, ", n);
// }

// int	main(void)
// {
// 	int length;

// 	int tab[] = {3, 7, 8, 4, 6, 5, 9, 2, 1, 0};

// 	length = sizeof(tab) / sizeof(int);

// 	ft_foreach(tab, length, print_int);	
// }