/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edcastro <edcastro@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 11:09:35 by edcastro          #+#    #+#             */
/*   Updated: 2023/07/11 16:43:44 by edcastro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_put_hexlong(unsigned long n, char *base)
{
	int		retPointer;

	retPointer = 0;
	if (n >= 16)
		retPointer += ft_put_hexlong(n / 16, base);
	retPointer += ft_putchar(base[n % 16]);
	return (retPointer);
}

int	ft_putptr(unsigned long n, char *base)
{
	int		retPointer;

	retPointer = 0;
	if (n == 0)
	{
		ft_putstr("(nil)");
		return (5);
	}
	retPointer += ft_putstr("0x");
	retPointer += ft_put_hexlong(n, base);
	return (retPointer);
}