/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qacjl <qacjl@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 12:54:24 by quenalla          #+#    #+#             */
/*   Updated: 2024/06/14 14:52:53 by qacjl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"printf.h"

int	ft_printnbr(int n)
{
	long  int	nb;
	long  int	compteur;
	int			len;

	nb = n;
	len = 1;
	if (nb == 0)
		return (ft_printchar('0'));
	if (nb < 0)
	{
		ft_printchar('-');
		nb = -nb;
	}
	while (compteur < nb)
	{
		if (compteur != nb)
			len++;
		compteur = compteur * 10;
	}
	while ((compteur / 10) != 1)
	{
		ft_printchar(nb / compteur + '0');
		nb = nb % compteur;
	}
	return (len);
}
