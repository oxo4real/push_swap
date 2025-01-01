/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaghzal <aaghzal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 11:50:57 by aaghzal           #+#    #+#             */
/*   Updated: 2025/01/01 18:37:31 by aaghzal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	return_to_stack_a(t_list **a, t_list **b);
static void	max_to_top(t_list **lst, char mode);
static void	return_to_a(t_list **a, t_list **b);
static void	tiny_sort(t_list **a, t_list **b, int lstlen);

void	sort_a(t_list **a, t_list **b)
{
	int				lstlen;
	unsigned int	range[2];

	if (!issorted(*a))
	{
		lstlen = ft_lstsize((*a));
		if (lstlen <= 5)
			return (tiny_sort(a, b, lstlen));
		range[0] = 0;
		range[1] = 0.045 * lstlen + 10;
		while (*a)
		{
			if ((*a)->index > range[1])
				rotate_a(a, 1);
			else
			{
				push_b(a, b, 1);
				if ((*b)->index < range[0])
					rotate_b(b, 1);
				range[0]++;
				range[1]++;
			}
		}
		return_to_a(a, b);
	}
}

static void	tiny_sort(t_list **a, t_list **b, int lstlen)
{
	int		lstlen_cp;
	t_list	*min;

	lstlen_cp = lstlen;
	while (lstlen_cp > 3)
	{
		push_b(a, b, 1);
		lstlen_cp--;
	}
	sort_3(a);
	return_to_stack_a(a, b);
	curr_ind(*a);
	min = (*a);
	while (!min->ismin)
		min = min->next;
	move_a_to_top(min, a);
}

static void	return_to_stack_a(t_list **a, t_list **b)
{
	while (*b)
	{
		init_b((*a), (*b));
		send_to_stack_a(a, b);
	}
}

static void	return_to_a(t_list **a, t_list **b)
{
	while (*b)
	{
		curr_ind((*b));
		max_to_top(b, 'b');
		push_a(a, b, 1);
	}
}

static void	max_to_top(t_list **lst, char mode)
{
	t_list	*max;

	max = (*lst);
	while (!max->ismax)
		max = max->next;
	if (mode == 'b')
		move_b_to_top(max, lst);
	else if (mode == 'a')
		move_a_to_top(max, lst);
}
