/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhexa.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qacjl <qacjl@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 11:30:46 by quenalla          #+#    #+#             */
/*   Updated: 2024/06/14 14:49:14 by qacjl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"printf.h"

/*void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}*/

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

int	ft_printhexa(int i)
{
	int	len;

	len = ft_len_hexa(i);
	if (i >= 16)
	{
		ft_printhexa(i / 16);
		ft_printhexa(i % 16);
	}
	else
	{
		if (i <= 9)
			ft_putchar_fd(i + '0', 1);
		else
			ft_putchar_fd(i - 10 + 'a', 1);
	}
	return (len);
}
/*
int main()
{
	printf("je sais compter en hexa %x\n", 546456546);
	ft_printhexa(546456546);
}*/
