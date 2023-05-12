/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abastida <abastida@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 16:55:22 by abastida          #+#    #+#             */
/*   Updated: 2023/05/12 16:55:22 by abastida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int *ft_rrange(int start, int end)
{
	int *value;
	int len;
	int i = 0;

	if(end < start)
		len = start - end + 1;
	len = end - start + 1;
	value = (int *)malloc(sizeof(int) * len);
	if (!value)
		return (NULL);
	while (len && end >= start)
	{
		value[i] = end - i;
		i++;
		len--;
	}
	while (len && end < start)
	{
		value[i] = end + i;
		i++;
		len--;
	}
	return (value);
}


int main()
{
	int *num;
	int start = 0;
	int end = 3;
	int i = 0;
	int len = 0;
	if(end < start)
		len = start - end + 1;
	len = end - start + 1;
	num  = ft_rrange(start, end);
	while (len)
	{
		printf("%d ", num[i]);
		i++;
		len--;
	}
}
