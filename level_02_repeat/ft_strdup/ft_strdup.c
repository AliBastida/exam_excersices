/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abastida <abastida@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 11:04:19 by abastida          #+#    #+#             */
/*   Updated: 2023/05/31 11:14:17 by abastida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int ft_strlen(char *src)
{
	int i =0;
	while (src[i])
	{
		i++;
	}
	return (i);
}

char    *ft_strdup(char *src)
{
	int i = 0;
	int len = ft_strlen(src) + 1;
	char *copy;
	copy = (char *) malloc (sizeof(char) * len);
	if (!copy)
		return (NULL);
	while (src[i])
	{
		copy[i] = src[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}
/*
int main ()
{
	char s[20] = "Hola como estas";
	char *copy = ft_strdup(s);
	printf ("%s\n", copy);
}*/
