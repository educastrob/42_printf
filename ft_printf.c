/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edcastro <edcastro@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 18:34:00 by edcastro          #+#    #+#             */
/*   Updated: 2023/07/11 17:37:57 by edcastro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	convert_format(va_list ap, char *formatStr, int i)
{
	int	len;

	len = 0;
	if (formatStr[i] == '%')
		len += ft_putchar('%');
	else if (formatStr[i] == 'c')
		len += ft_putchar((char) va_arg(ap, int));
	else if (formatStr[i] == 's')
		len += ft_putstr(va_arg(ap, char *));
	else if (formatStr[i] == 'u')
		len += ft_putuint(va_arg(ap, unsigned int));
	else if (formatStr[i] == 'p')
		len += ft_putptr(va_arg(ap, unsigned long), HEX_LOWER);
	else if (formatStr[i] == 'd' || formatStr[i] == 'i')
		len += ft_putnbr(va_arg(ap, int), formatStr, i, 1);
	else if (formatStr[i] == 'x' || formatStr[i] == 'X')
		len += ft_puthex(va_arg(ap, unsigned int), formatStr, i, 1);
	return (len);
}

int	ft_printf(const char *formatStr, ...)
{
	int		i;
	int		len;
	va_list	ap;

	i = 0;
	len = 0;
	if (!formatStr)
		return (-1);
	va_start(ap, formatStr);
	while (formatStr[i] != '\0')
	{
		if (formatStr[i] == '%')
		{
			i++;
			len += convert_format(ap, (char *)formatStr, i);
		}
		else
			len += ft_putchar(formatStr[i]);
		i++;
	}
	va_end(ap);
	return (len);
}

// #include <stdio.h>
// int main(void)
// {
// 	int	count;
	
// 	printf("\nFT PRINTF:\n");
// 	count =	ft_printf("hex(x):%x\n", 0);
// 	printf("return value: %d\n", count);
// 	printf("ORIGINAL PRINTF:\n");
// 	count = printf("hex(x):%x\n", 0);
// 	printf("return value: %d\n", count);

// 	printf("\nFT PRINTF:\n");
// 	count =	ft_printf("hex(X):%X %X %X\n", 0, -65, 65);
// 	printf("return value: %d\n", count);
// 	printf("ORIGINAL PRINTF:\n");
// 	count = printf("hex(X):%X %X %X\n", 0, -65, 65);
// 	printf("return value: %d\n", count);
	
// 	return (0);
// }