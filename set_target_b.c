/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_target_b.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaghzal <aaghzal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 16:12:35 by aaghzal           #+#    #+#             */
/*   Updated: 2024/12/29 16:49:36 by aaghzal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	set_target_to_min(t_list *a, t_list *b);

void	set_target_b(t_list *a, t_list *b)
{
	long long	target;
	t_list		*head;

	while (b)
	{
		target = LONG_LONG_MAX;
		head = a;
		while (head)
		{
			if (head->content < target && head->content > b->content)
			{
				target = head->content;
				b->target = head;
			}
			head = head->next;
		}
		if (target == LONG_LONG_MAX)
			set_target_to_min(a, b);
		b = b->next;
	}
}

static void	set_target_to_min(t_list *a, t_list *b)
{
	while (!a->ismin)
		a = a->next;
	b->target = a;
}
