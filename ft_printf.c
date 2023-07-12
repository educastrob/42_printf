/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edcastro <edcastro@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 18:34:00 by edcastro          #+#    #+#             */
/*   Updated: 2023/07/12 13:20:44 by edcastro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	convert_format(va_list ap, char *fmtStr, int i)
{
	int	len;

	len = 0;
	if (fmtStr[i] == '%')
		len += ft_putchar('%');
	else if (fmtStr[i] == 'c')
		len += ft_putchar((char) va_arg(ap, int));
	else if (fmtStr[i] == 's')
		len += ft_putstr(va_arg(ap, char *));
	else if (fmtStr[i] == 'u')
		len += ft_putuint(va_arg(ap, unsigned int));
	else if (fmtStr[i] == 'p')
		len += ft_putptr(va_arg(ap, unsigned long), HEX_LOWER);
	else if (fmtStr[i] == 'd' || fmtStr[i] == 'i')
		len += ft_putnbr(va_arg(ap, int), fmtStr, i, 1);
	else if (fmtStr[i] == 'x' || fmtStr[i] == 'X')
		len += ft_puthex(va_arg(ap, unsigned int), fmtStr, i, 1);
	return (len);
}

int	ft_printf(const char *fmtStr, ...)
{
	int		i;
	int		len;
	va_list	ap;

	i = -1;
	len = 0;
	if (!fmtStr)
		return (-1);
	va_start(ap, fmtStr);
	while (fmtStr[++i] != '\0')
	{
		if (fmtStr[i] == '%')
		{
			i++;
			while (fmtStr[i] != 'c' && fmtStr[i] != 's' && fmtStr[i] != 'p'
				&& fmtStr[i] != 'd' && fmtStr[i] != 'i' && fmtStr[i] != 'u'
				&& fmtStr[i] != 'x' && fmtStr[i] != 'X' && fmtStr[i] != '%')
				i++;
			len += convert_format(ap, (char *)fmtStr, i);
		}
		else
			len += ft_putchar(fmtStr[i]);
	}
	va_end(ap);
	return (len);
}
