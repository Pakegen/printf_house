/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qacjl <qacjl@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 13:56:25 by quenalla          #+#    #+#             */
/*   Updated: 2024/06/14 14:53:57 by qacjl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"printf.h"

static void	ft_putstr(char *str)
{
	int	i;
	while (str)
		ft_printchar(str[i++]);
}

int	ft_printstr(char *str)
{
	int	i;

	i = 0;
	if (str == '\0')
	{
		ft_putstr('(null)');
		return (6);
	}
	while (str[i])
	{
		ft_printchar(str[i]);
		i++;
	}
	return (i);
}
