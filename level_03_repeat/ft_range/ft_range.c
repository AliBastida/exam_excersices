/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abastida <abastida@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 10:04:19 by abastida          #+#    #+#             */
/*   Updated: 2023/06/08 10:36:47 by abastida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int *ft_range(int start, int end)
{
	int len;
	int i = 0;
	int *range;

	if (start > end)
		len = start - end + 1;
	else
		len = end - start + 1;
	range = (int *)malloc(sizeof(int) * len);
	if (!range)
		return(NULL);
	while (len > i && start <= end)
	{
		range[i] = start + i;
		i++;
	}
	while (len > i && start > end)
	{
		range[i] = start - i;
		i++;
	}
	return (range);
}

int main()
{
	int start = 0;
	int end = 0;
	int len;
	if (end > start)
		len = end - start + 1;
	else
		len = start - end + 1;
	int *range;
	int i = 0;

	range = ft_range(start, end);
	while (len > i)
	{
		printf("%d ", range[i]);
		i++;
	}
	return (0);
}
