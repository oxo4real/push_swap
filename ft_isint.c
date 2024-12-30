/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isint.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaghzal <aaghzal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/25 16:32:02 by aaghzal           #+#    #+#             */
/*   Updated: 2024/12/26 15:18:34 by aaghzal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	ft_intlen(char *w);

int	ft_isint(char *w)
{
	int		int_len;
	int		i;

	i = 0;
	int_len = ft_intlen(w);
	while (w[i] == '-' || w[i] == '+')
		i++;
	if (int_len < 0)
	{
		if (int_len < -10)
			return (0);
		else if (int_len == -10
			&& ft_intcmp(&w[i], "2147483648") > 0)
			return (0);
	}
	else
	{
		if (int_len > 10)
			return (0);
		else if (int_len == 10
			&& ft_intcmp(&w[i], "2147483647") > 0)
			return (0);
	}
	return (1);
}

static int	ft_intlen(char *w)
{
	int		i;
	int		count;
	int		signe;

	i = 0;
	count = 0;
	signe = 1;
	while (w[i] == '0' || w[i] == '-' || w[i] == '+')
	{
		if (w[i] == '-')
			signe *= -1;
		i++;
	}
	while (w[i] && w[i] != ' ')
	{
		i++;
		count++;
	}
	return (count * signe);
}
