/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abastida <abastida@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 11:26:17 by abastida          #+#    #+#             */
/*   Updated: 2023/05/05 11:26:17 by abastida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int i = 0;
	while (str[i])
		i++;
	return (i);
}

char    *ft_strdup(char *src)
{
	int i = 0;
	char *result;
	int len = ft_strlen(src);
	result = (char *)malloc(sizeof(char) * len) + 1;
	if (!result)
		return (NULL);
	while (src[i])
	{
		result[i] = src[i];
		i++;
	}
	result[i] = '\0';
	return (result);
}

int main()
{
	char *result;
	char *s1 = "hola Ferran";
	result = ft_strdup(s1);
	printf("%s\n", result);
}
