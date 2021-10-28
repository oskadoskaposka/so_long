/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaduan- <apaduan-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 18:27:26 by apaduan-          #+#    #+#             */
/*   Updated: 2021/10/27 23:56:57 by apaduan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

// checa o char da str se é '%' e se o proximo é "cspdiuxX%", falta "pxX" 
int	functions_flags(va_list args, int flag)
{
	int	printed;

	printed = 0;
	if (flag == 'c')
		printed = ft_print_c (va_arg(args, int));
	else if (flag == 's')
		printed = ft_print_s (va_arg(args, char *));
	else if (flag == '%')
		printed = ft_print_c (flag);
	else if (flag == 'd' || flag == 'i')
		printed = ft_print_di (va_arg(args, int));
	else if (flag == 'u')
		printed = ft_print_u (va_arg(args, unsigned int));
	else if (flag == 'x')
		printed = ft_print_x (va_arg(args, unsigned int), 'a');
	else if (flag == 'X')
		printed = ft_print_x (va_arg(args, unsigned int), 'A');
	else if (flag == 'p')
		printed = ft_print_p (va_arg(args, unsigned long long), 'a');
	return (printed);
}

int	ft_printf(const char *string, ...)
{
	int		printed;
	va_list	flags;

	va_start(flags, string);
	printed = 0;
	while (*string)
	{
		if (*string == '%' && ft_strchr ("cspdiuxX%", string[1]))
		{
			printed = functions_flags(flags, string[1]) + printed;
			string = string + 2;
		}
		else
		{
			ft_putchar_fd(*string, 1);
			printed = printed + 1;
			string = string + 1;
		}
	}
	va_end(flags);
	return (printed);
}
