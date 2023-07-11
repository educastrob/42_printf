/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edcastro <edcastro@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 09:00:31 by edcastro          #+#    #+#             */
/*   Updated: 2023/07/11 09:00:48 by edcastro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_putnbr(long long n)
{
	char	num;
	int		len;

	num = 0;
	len = 0;
	if (n >= 10)
	{
		num = n % 10 + '0';
		n /= 10;
		len += ft_putnbr(n);
		len += write(1, &num, 1);
	}
	else if (0 <= n && n <= 9)
	{
		n += '0';
		len += write(1, &n, 1);
	}
	else if (n < 0)
	{
		n *= (-1);
		len += write(1, "-", 1);
		len += ft_putnbr(n);
	}
	return (len);
}