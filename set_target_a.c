/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_target_a.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaghzal <aaghzal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 16:12:35 by aaghzal           #+#    #+#             */
/*   Updated: 2024/12/29 16:49:29 by aaghzal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	set_target_to_max(t_list *a, t_list *b);

void	set_target_a(t_list *a, t_list *b)
{
	long long	target;
	t_list		*head;

	while (a)
	{
		target = LONG_LONG_MIN;
		head = b;
		while (head)
		{
			if (head->content > target && head->content < a->content)
			{
				target = head->content;
				a->target = head;
			}
			head = head->next;
		}
		if (target == LONG_LONG_MIN)
			set_target_to_max(a, b);
		a = a->next;
	}
}

static void	set_target_to_max(t_list *a, t_list *b)
{
	while (!b->ismax)
		b = b->next;
	a->target = b;
}
