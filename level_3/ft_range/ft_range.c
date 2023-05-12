/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abastida <abastida@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 15:20:29 by abastida          #+#    #+#             */
/*   Updated: 2023/05/12 15:20:29 by abastida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int start, int end)
{
	int *value;
	int len = 0;
	int i = 0;

	if (start > end)
		len = start - end + 1;
	else
		len = end - start + 1;
	value = (int *)malloc(sizeof(int) * len);
	while(len && start <= end)
	{
		value[i] = start + i;
		len--;
		i++;
	}

	while(len && start > end)
	{
		value[i] = start - i;
		len--;
		i++;
	}
	return (value);
}



int	main()
{
	int start = -1;
	int end = 2;
	int i = 0;
	int len;
	if(start > end)
		len = start - end + 1;
	else
		len = end - start + 1;

	int *num = ft_range(start, end);
	while(len)
	{
		printf("%d ", num[i]);
		i++;
		len--;
	}
	return(0);

}
