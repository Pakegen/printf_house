/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printmajhexa.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qacjl <qacjl@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 11:55:30 by quenalla          #+#    #+#             */
/*   Updated: 2024/06/14 14:52:01 by qacjl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"printf.h"

static int	ft_len_hexa(int i)
{
	int	len;

	len = 0;
	while (i != 0)
	{
		len++;
		i = i / 16;
	}
	return (len);
}

int	ft_printmajhexa(int i)
{
	int	len;

	len = ft_len_hexa(i);
	if (i >= 16)
	{
		ft_printmajhexa(i / 16);
		ft_printmajhexa(i % 16);
	}
	else
	{
		if (i <= 9)
			ft_printchar(i + '0');
		else
			ft_printchar(i - 10 + 'A');
	}
	return (len);
}
