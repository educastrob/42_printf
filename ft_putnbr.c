/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edcastro <edcastro@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 09:00:31 by edcastro          #+#    #+#             */
/*   Updated: 2023/07/12 11:33:03 by edcastro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(long n, char *s, int i, int flagCheck)
{
	int	count;

	count = 0;
	if (n >= 0 && flagCheck == 1 && (s[i - 1] == ' '
			|| s[i - 1] == '+'))
		count += ft_putchar(s[i - 1]);
	if (n < 0)
	{
		count += ft_putchar('-');
		n *= -1;
	}
	if (n > 9)
		count += ft_putnbr(n / 10, s, i, flagCheck);
	count += ft_putchar((n % 10) + '0');
	return (count);
}
