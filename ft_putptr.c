/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edcastro <edcastro@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 11:09:35 by edcastro          #+#    #+#             */
/*   Updated: 2023/07/12 11:31:55 by edcastro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_put_hexlong(unsigned long n, char *base)
{
	int	count_pointer;

	count_pointer = 0;
	if (n >= 16)
		count_pointer += ft_put_hexlong(n / 16, base);
	count_pointer += ft_putchar(base[n % 16]);
	return (count_pointer);
}

int	ft_putptr(unsigned long n, char *base)
{
	int	count_pointer;

	count_pointer = 0;
	if (n == 0)
	{
		ft_putstr("(nil)");
		return (5);
	}
	count_pointer += ft_putstr("0x");
	count_pointer += ft_put_hexlong(n, base);
	return (count_pointer);
}
