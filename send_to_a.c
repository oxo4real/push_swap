/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   send_to_a.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaghzal <aaghzal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 18:23:49 by aaghzal           #+#    #+#             */
/*   Updated: 2024/12/30 08:01:43 by aaghzal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void both_case(t_list *to_move, t_list **a, t_list **b, t_moves **moves);

void	send_to_a(t_list **a, t_list **b, t_moves **moves)
{
	t_list	*best;

	best = get_cheapest((*b));
	both_case(best, a, b, moves);
	push_a(a, b, moves);
}

static void both_case(t_list *to_move, t_list **a, t_list **b, t_moves **moves)
{
	while ((*a)->content != to_move->target->content
		|| (*b)->content != to_move->content)
	{
		if ((*a)->content != to_move->target->content)
		{
			if (to_move->target->abov_median)
				rotate_a(a, moves);
			else
			 	rrotate_a(a, moves);
		}
		if ((*b)->content != to_move->content)
		{
			if (to_move->abov_median)
				rotate_b(b, moves);
			else
				rrotate_b(b, moves);
		}
	}
}
