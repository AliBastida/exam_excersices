/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_power_of_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abastida <abastida@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 10:59:08 by abastida          #+#    #+#             */
/*   Updated: 2023/05/08 10:59:08 by abastida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int    is_power_of_two(int num)
{
    int compare = 1;
    while (compare <= num)
    {
        if(compare == num)
            return (1);
        compare = compare * 2;
    }
    return(0);
}

int	main()
{
	int num = 0;
	is_power_of_two(num);
	return (0);
}
