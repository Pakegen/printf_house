/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printunsigned.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qacjl <qacjl@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 15:10:03 by quenalla          #+#    #+#             */
/*   Updated: 2024/06/14 14:53:05 by qacjl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"printf.h"

int	ft_printunsigned(unsigned int n)
{
	unsigned long int	nb;
	unsigned long int	compteur;
	int					len;

	nb = n;
	len = 1;
	if (nb == 0)
		return (ft_printchar(n));
	while (compteur < nb)
	{
		if (compteur != nb)
			len++;
		compteur = compteur * 10;
	}
	while (compteur != 1)
	{
		compteur = compteur / 10;
		ft_printchar(nb / compteur + '0');
		nb = nb % compteur;
	}
	return (len);
}
