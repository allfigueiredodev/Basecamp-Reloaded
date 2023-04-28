/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperis-p <aperis-p@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 15:51:16 by aperis-p          #+#    #+#             */
/*   Updated: 2023/04/28 12:57:04 by aperis-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*between;
	int	count;
	int	i;

	if (min >= max)
		return (NULL);
	count = max - min;
	between = malloc(count * sizeof(int));
	if (!between)
	{
		return (NULL);
	}
	i = 0;
	while (i < count)
	{
		between[i] = min + i;
		i++;
	}
	return (between);
}

// int	main(void)
// {
// 	int	*ptr;
// 	int	count;

// 	ptr = ft_range(2, 8);
// 	count = 0;
// 	while (count < 8 - 2)
// 	{
// 		printf("%d\n", ptr[count]);
// 		count++;
// 	}
// }
