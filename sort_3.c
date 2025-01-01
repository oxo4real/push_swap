/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaghzal <aaghzal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 18:03:56 by aaghzal           #+#    #+#             */
/*   Updated: 2025/01/01 17:58:01 by aaghzal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_3(t_list **a)
{
	curr_ind((*a));
	if ((*a)->ismax)
		rotate_a(a, 1);
	else if (((*a)->next)->ismax)
		rrotate_a(a, 1);
	if ((*a)->content > ((*a)->next)->content)
		swap_a(a, 1);
}
