/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strspn.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abastida <abastida@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 13:16:21 by abastida          #+#    #+#             */
/*   Updated: 2023/05/05 13:16:21 by abastida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int ft_strlen(char *str)
{
  int i = 0;
  while(str[i])
    i++;
  return(i);
}
size_t ft_strspn(const char *s, const char *accept)
{
  size_t i=0;
  
  while (s[i] && accept[i])
  {
    if (s[i] != accept[i])
      return (i);
    i++;
  } 
  return(0);
}

int main()
{
  char s1[12] = "hola que tal";
  char accept[10] = "hola qie";
  printf("%zu\n", strspn(s1, accept));
  printf("%zu\n", ft_strspn(s1, accept));
  return(0);
}
