/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edcastro <edcastro@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 18:34:00 by edcastro          #+#    #+#             */
/*   Updated: 2023/07/04 19:59:43 by edcastro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	ft_printf(const char *formatString, ...)
{
	int		len;
	va_list	ap;

	len = 0;
	va_start(ap, formatString);
	if (!formatString)
		return (-1);
	while (*formatString)
	{
		len = len + ft_putchar(ap);
		formatString++;
	}
	va_end(ap);
	return (len);
}

int	main()
{
	
	return 0;
}