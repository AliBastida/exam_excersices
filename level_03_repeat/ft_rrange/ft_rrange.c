/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abastida <abastida@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 10:43:40 by abastida          #+#    #+#             */
/*   Updated: 2023/06/08 11:06:40 by abastida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdlib.h>
#include <stdio.h>

int     *ft_rrange(int start, int end)
{
	int i = 0;
	int len; 
	int *range;
	if (end > start)
		len = end - start + 1;
	else
		len = start - end + 1;
	range = (int *)malloc(sizeof(int)*len);
	if (!range)
		return (NULL);
	while (len > i && end >= start)
	{
		range[i] = end - i;
		i++;
	}
	while (len > i && end < start)
	{
		range[i] = end + i;
		i++;
	}
	return (range);
}



int main()
{
	int start = 0;
	int end = -3;
	int i = 0;
	int len;
	int *range = ft_rrange(start, end);
	if (end > start)
		len = end - start +1;
	else
		len = start - end + 1;
	while (len > i)
	{
		printf("%d ", range[i]);
		i++;
	}
	return (0);

}
