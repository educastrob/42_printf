/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edcastro <edcastro@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 18:34:05 by edcastro          #+#    #+#             */
/*   Updated: 2023/07/08 22:41:46 by edcastro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# define HEX_UPPER "0123456789ABCDF"
# define HEX_LOWER "0123456789abcdf"

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

int	ft_printf(const char *formatString, ...);
int	ft_putchar(char c);
size_t	ft_strlen(const char *s);
int	ft_putstr(char *s);
int	ft_putnbr(long long n);

#endif