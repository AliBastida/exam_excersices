/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abastida <abastida@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 14:09:01 by abastida          #+#    #+#             */
/*   Updated: 2023/12/01 14:35:09 by abastida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdarg.h>

void putstr(char *str, int *len)
{
	int i = 0;
	if (!str)
		str = "(null)";
	while(str[i])
		*len += write(1, &str[i++], 1);
}

void putdigit(long long int num, int base, int *len)
{
	char *number = "0123456789abcdef";

	if(num < 0)
	{
		num *= -1;
		*len += write(1, "-", 1);
	}
	if(num >= base)
		putdigit(num/base, base, len);
	*len += write(1, &number[num%base], 1);
}

int ft_printf(const char *format, ...)
{
	va_list ptr;
	int len = 0;

	va_start(ptr, format);
	while(*format)
	{
		if (*format == '%' && ((*(format + 1) == 's') || (*(format + 1) == 'x') || (*(format + 1) == 'd')))
		{
			format++;
			if(*format == 's')
				putstr(va_arg(ptr, char *), &len);
			else if(*format == 'd')
				putdigit((long long int)va_arg(ptr, int), 10, &len);
			else if(*format == 'x')
				putdigit((long long int)va_arg(ptr, unsigned int), 16, &len);
		}
		else
			len += write(1, format, 1);
		format++;
	}
	va_end(ptr);
	return(len);
}

int main(void)
{
	printf("***%d\n", printf("hola %s", "caracola"));	
	ft_printf("***%d\n", ft_printf("hola %s", "caracola"));
	printf("***%d\n", printf("hola %d", 42));	
	ft_printf("***%d\n", ft_printf("hola %d", 42));
	printf("***%d\n", printf("hola %x", 331));	
	ft_printf("***%d\n", ft_printf("hola %x", 331));

}
