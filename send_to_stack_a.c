/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   send_to_stack_a.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaghzal <aaghzal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 18:23:49 by aaghzal           #+#    #+#             */
/*   Updated: 2025/01/01 18:44:20 by aaghzal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	both_case(t_list *to_move, t_list **a, t_list **b);

void	send_to_stack_a(t_list **a, t_list **b)
{
	t_list	*best;

	best = get_cheapest((*b));
	both_case(best, a, b);
	push_a(a, b, 1);
}

static void	both_case(t_list *to_move, t_list **a, t_list **b)
{
	while ((*a)->content != to_move->target->content
		|| (*b)->content != to_move->content)
	{
		if ((*a)->content != to_move->target->content)
		{
			if (to_move->target->abov_median)
				rotate_a(a, 1);
			else
				rrotate_a(a, 1);
		}
		if ((*b)->content != to_move->content)
		{
			if (to_move->abov_median)
				rotate_b(b, 1);
			else
				rrotate_b(b, 1);
		}
	}
}
