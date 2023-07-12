/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edcastro <edcastro@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 17:19:14 by edcastro          #+#    #+#             */
/*   Updated: 2023/07/12 11:33:21 by edcastro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex(unsigned int n, char *s, int i, int hashCheck)
{
	int	count;

	count = 0;
	if (n != 0 && s[i - 1] == '#' && hashCheck == 1)
	{
		if (s[i] == 'x')
			count += ft_putstr("0x");
		else
			count += ft_putstr("0X");
	}
	hashCheck = 0;
	if (s[i] == 'X')
	{
		if (n >= 16)
			count += ft_puthex(n / 16, s, i, hashCheck);
		count += ft_putchar(HEX_UPPER[n % 16]);
	}
	else
	{
		if (n >= 16)
			count += ft_puthex(n / 16, s, i, hashCheck);
		count += ft_putchar(HEX_LOWER[n % 16]);
	}
	return (count);
}
