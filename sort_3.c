/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaghzal <aaghzal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 18:03:56 by aaghzal           #+#    #+#             */
/*   Updated: 2024/12/29 19:10:10 by aaghzal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_3(t_list **a, t_moves **moves)
{
	curr_ind((*a));
	if ((*a)->ismax)
		rotate_a(a, moves);
	else if (((*a)->next)->ismax)
		rrotate_a(a, moves);
	if ((*a)->content > ((*a)->next)->content)
		swap_a(a, moves);
}
