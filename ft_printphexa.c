/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printphexa.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qacjl <qacjl@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 15:20:24 by quenalla          #+#    #+#             */
/*   Updated: 2024/06/14 14:56:08 by qacjl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"printf.h"

static int	lenphexa(unsigned long int p)
{
	int	len;

	len = 0;
	while (p != 0)
	{
		len++;
		p = p / 16;
	}
	return (len);
}

static void	ft_putstr(char *str)
{
	int	i;
	while (str)
		ft_printchar(str[i++]);
}

int	ft_printphexa(unsigned long int p)
{
	int	len;

	len = lenphexa(p);
	if (p == 0)
	{
		ft_putstr("(nil)");
		return (5);
	}
	if (p >= 16)
	{
		ft_printphexa(p / 16);
		ft_printphexa(p % 16);
	}
	else
	{
		if (p < 10)
			ft_printchar(p + '0');
		else
			ft_printchar(p - 10 + 'a');
	}

}
