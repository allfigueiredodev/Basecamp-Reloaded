/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperis-p <aperis-p@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 14:55:07 by aperis-p          #+#    #+#             */
/*   Updated: 2023/04/28 12:49:47 by aperis-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	counter;

	counter = 0;
	while (*str != '\0')
	{
		counter++;
		str++;
	}
	return (counter);
}

char	*ft_strdup(char *src)
{
	int		i;
	char	*dupped;

	i = 0;
	dupped = (char *) malloc(sizeof (char) * (ft_strlen(src) + 1));
	if (!dupped)
	{
		return (NULL);
	}
	while (src[i] != '\0')
	{
		dupped[i] = src[i];
		i++;
	}
	dupped[i] = '\0';
	return (dupped);
}

// int	main(void)
// {
// 	printf("%s", ft_strdup("dup testiuhasdhuisfda"));
// }
