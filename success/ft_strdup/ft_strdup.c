/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abastida <abastida@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 14:01:34 by abastida          #+#    #+#             */
/*   Updated: 2022/10/17 14:01:36 by abastida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char *copy;
	int	i;
	int	length;

	i = 0;
	length = 0;
	while (src[length])
		length++;
	copy = malloc(sizeof(char)* length + 1);
	if (copy != NULL)
	{
		while (src[i])
		{
			copy[i] = src[i];
			i++;
		}
		copy[i] = '\0';

	}
	return (copy);
}

