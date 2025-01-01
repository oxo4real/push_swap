/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_b.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaghzal <aaghzal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/25 17:56:15 by aaghzal           #+#    #+#             */
/*   Updated: 2025/01/01 17:51:47 by aaghzal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_b(t_list **a, t_list **b, int print)
{
	t_list	*tmp;

	if (!(*a))
		return ;
	if (print)
		ft_putstr_fd("pb\n", 1);
	tmp = (*a);
	(*a) = (*a)->next;
	if ((*a))
		(*a)->prev = NULL;
	tmp->next = (*b);
	if (*b)
		(*b)->prev = tmp;
	(*b) = tmp;
}
