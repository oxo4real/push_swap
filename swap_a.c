/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaghzal <aaghzal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/25 17:58:48 by aaghzal           #+#    #+#             */
/*   Updated: 2025/01/01 17:53:07 by aaghzal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_a(t_list **a, int print)
{
	t_list	*tmp;

	if (!(*a))
		return ;
	if (print)
		ft_putstr_fd("sa\n", 1);
	tmp = (*a);
	(*a) = (*a)->next;
	(*a)->prev = NULL;
	tmp->next = (*a)->next;
	if ((*a)->next)
		((*a)->next)->prev = tmp;
	(*a)->next = tmp;
	tmp->prev = (*a);
}
