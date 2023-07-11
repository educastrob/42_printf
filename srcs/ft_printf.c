/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edcastro <edcastro@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 18:34:00 by edcastro          #+#    #+#             */
/*   Updated: 2023/07/11 10:30:24 by edcastro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	convert_format(va_list ap, const char *formatString)
{
	int	len;

	len = 0;
	if (*formatString == '%')
		len += ft_putchar('%');
	else if (*formatString == 'c')
		len += ft_putchar((char) va_arg(ap, int));
	else if (*formatString == 's')
		len += ft_putstr(va_arg(ap, char *));
	else if (*formatString == 'd' || *formatString == 'i')
		len += ft_putnbr(va_arg(ap, int));
	else if (*formatString == 'u')
		len += ft_putnbr(va_arg(ap, unsigned int));
	return (len);
}

int	ft_printf(const char *formatString, ...)
{
	int		len;
	va_list	ap;

	len = 0;
	if (!formatString)
		return (-1);
	va_start(ap, formatString);
	while (*formatString)
	{
		if (*formatString == '%')
		{
			formatString++;
			len += convert_format(ap, formatString);
		}
		else
			len += ft_putchar(*formatString);
		formatString++;
	}
	va_end(ap);
	return (len);
}

#include <stdio.h>
int main(void)
{
	printf("%u\n", 123);
	ft_printf("%u", 123);
	return 0;
}