/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stestein <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/13 08:37:28 by stestein          #+#    #+#             */
/*   Updated: 2018/01/14 20:20:04 by stestein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	sastantua(int size);

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

int		main(void)
{
	sastantua(5);
	return (0);
}
