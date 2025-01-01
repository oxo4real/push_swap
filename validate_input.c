/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate_input.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaghzal <aaghzal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/24 14:22:20 by aaghzal           #+#    #+#             */
/*   Updated: 2025/01/01 18:36:24 by aaghzal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	validate_arg(char *s);
static int	int_check_arg(char *s);

int	validate_input(int ac, char **av)
{
	int		i;

	i = 1;
	while (i < ac)
	{
		if (!validate_arg(av[i])
			|| !int_check_arg(av[i]))
			return (0);
		i++;
	}
	return (1);
}

static int	validate_arg(char *s)
{
	int		i;
	int		digit_count;

	digit_count = 0;
	i = 0;
	if (!s[i])
		return (0);
	while (s[i])
	{
		if ((s[i] == '-' || s[i] == '+') && !ft_isdigit(s[i + 1]))
			return (0);
		if (ft_isdigit(s[i]) && (s[i + 1] == '-' || s[i + 1] == '+'))
			return (0);
		if (ft_isdigit(s[i]))
			digit_count++;
		else if (s[i] != ' ' && s[i] != '-' && s[i] != '+')
			return (0);
		i++;
	}
	if (digit_count == 0)
		return (0);
	return (1);
}

static int	int_check_arg(char *s)
{
	int		i;

	i = 0;
	while (1)
	{
		while (s[i] && s[i] == ' ')
			i++;
		if (!s[i])
			break ;
		if (!ft_isint(&s[i]))
			return (0);
		while (s[i] && s[i] != ' ')
			i++;
	}
	return (1);
}
