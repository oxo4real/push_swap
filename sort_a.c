/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaghzal <aaghzal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 11:50:57 by aaghzal           #+#    #+#             */
/*   Updated: 2024/12/30 09:56:13 by aaghzal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	min_to_top(t_list **a, t_moves **moves);
static void	deal_with_a(t_list **a, t_list **b, t_moves **moves);

void	sort_a(t_list **a, t_list **b, t_moves **moves)
{
	int		lstlen;

	lstlen = ft_lstsize((*a));
	if (!issorted(*a))
	{
		if (lstlen == 2)
			return (swap_a(a, moves));
		if (lstlen == 3)
			return (sort_3(a, moves));
		if (lstlen-- > 3 && !issorted(*a))
			push_b(a, b, moves);
		if (lstlen-- > 3 && !issorted(*a))
			push_b(a, b, moves);
		while (lstlen-- > 3 && !issorted(*a))
			deal_with_a(a, b, moves);
		sort_3(a, moves);
		while (*b)
		{
			init_b((*a), (*b));
			send_to_a(a, b, moves);
		}
		curr_ind(*a);
		min_to_top(a, moves);
	}
}

static void	deal_with_a(t_list **a, t_list **b, t_moves **moves)
{
	init_a((*a), (*b));
	send_to_b(a, b, moves);
}

static void	min_to_top(t_list **a, t_moves **moves)
{
	t_list	*min;

	min = (*a);
	while (!min->ismin)
		min = min->next;
	move_a_to_top(min, a, moves);
}
