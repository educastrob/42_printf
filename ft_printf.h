/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edcastro <edcastro@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 18:34:05 by edcastro          #+#    #+#             */
/*   Updated: 2023/07/11 17:36:56 by edcastro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# define HEX_UPPER "0123456789ABCDEF"
# define HEX_LOWER "0123456789abcdef"

# include <unistd.h>
# include <stdarg.h>

int	ft_printf(const char *formatStr, ...);
int	ft_putchar(char c);
int	ft_putstr(char *s);
int	ft_putuint(unsigned int n);
int	ft_putptr(unsigned long n, char *base);
int	ft_putnbr(int n, char *s, int i, int flagCheck);
int	ft_puthex(unsigned int n, char *s, int i, int hashCheck);

#endif