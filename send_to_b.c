/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   send_to_b.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaghzal <aaghzal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 17:27:35 by aaghzal           #+#    #+#             */
/*   Updated: 2024/12/30 12:41:17 by aaghzal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void both_case(t_list *to_move, t_list **a, t_list **b, t_moves **moves);

void	send_to_b(t_list **a, t_list **b, t_moves **moves)
{
	t_list	*best;

	best = get_cheapest((*a));
	both_case(best, a, b, moves);
	push_b(a, b, moves);
}

static void both_case(t_list *to_move, t_list **a, t_list **b, t_moves **moves)
{
	while ((*a)->content != to_move->content
		|| (*b)->content != to_move->target->content)
	{
		if ((*a)->content != to_move->content)
		{
			if (to_move->abov_median)
				rotate_a(a, moves);
			else
			 	rrotate_a(a, moves);
		}
		if ((*b)->content != to_move->target->content)
		{
			if (to_move->target->abov_median)
				rotate_b(b, moves);
			else
				rrotate_b(b, moves);
		}
	}
}
