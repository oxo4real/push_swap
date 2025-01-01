/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   send_to_b.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaghzal <aaghzal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 17:27:35 by aaghzal           #+#    #+#             */
/*   Updated: 2025/01/01 18:45:01 by aaghzal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	both_case(t_list *to_move, t_list **a, t_list **b);

void	send_to_b(t_list **a, t_list **b)
{
	t_list	*best;

	best = get_cheapest((*a));
	both_case(best, a, b);
	push_b(a, b, 1);
}

static void	both_case(t_list *to_move, t_list **a, t_list **b)
{
	while ((*a)->content != to_move->content
		|| (*b)->content != to_move->target->content)
	{
		if ((*a)->content != to_move->content)
		{
			if (to_move->abov_median)
				rotate_a(a, 1);
			else
				rrotate_a(a, 1);
		}
		if ((*b)->content != to_move->target->content)
		{
			if (to_move->target->abov_median)
				rotate_b(b, 1);
			else
				rrotate_b(b, 1);
		}
	}
}
