/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaghzal <aaghzal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/25 17:35:49 by aaghzal           #+#    #+#             */
/*   Updated: 2025/01/01 17:50:02 by aaghzal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_a(t_list **a, t_list **b, int print)
{
	t_list	*tmp;

	if (!(*b))
		return ;
	if (print)
		ft_putstr_fd("pa\n", 1);
	tmp = (*b);
	(*b) = (*b)->next;
	if (*b)
		(*b)->prev = NULL;
	tmp->next = (*a);
	if (*a)
		(*a)->prev = tmp;
	(*a) = tmp;
}
