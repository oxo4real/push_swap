/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaghzal <aaghzal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/24 15:12:35 by aaghzal           #+#    #+#             */
/*   Updated: 2024/12/26 13:49:39 by aaghzal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	parse_args(t_list **a, char *s);

int	parse(t_list **a, int ac, char **av)
{
	int		i;
	t_list	*new;

	i = 1;
	while (i < ac)
	{
		if (!parse_args(a, av[i]))
			return (0);
		i++;
	}
	return (1);
}

static int	parse_args(t_list **a, char *s)
{
	int		i;
	char	**str_arr;
	t_list	*new;

	str_arr = ft_split(s, ' ');
	if (!str_arr)
		return (0);
	i = 0;
	while (str_arr[i])
	{
		new = ft_lstnew(ft_atoi(str_arr[i]));
		if (!new)
		{
			ft_lstclear(a);
			free_str_arr(str_arr);
			return (0);
		}
		ft_lstadd_back(a, new);
		i++;
	}
	free_str_arr(str_arr);
	return (1);
}
