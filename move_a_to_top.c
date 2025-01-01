/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_a_to_top.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaghzal <aaghzal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 17:34:05 by aaghzal           #+#    #+#             */
/*   Updated: 2025/01/01 18:42:14 by aaghzal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	abov_median_case(t_list *to_move, t_list **a);
static void	bellow_median_case(t_list *to_move, t_list **a);

void	move_a_to_top(t_list *to_move, t_list **a)
{
	if (!to_move)
		return ;
	if (to_move->abov_median)
		abov_median_case(to_move, a);
	else
		bellow_median_case(to_move, a);
}

static void	abov_median_case(t_list *to_move, t_list **a)
{
	if (a)
	{
		while ((*a)->content != to_move->content)
			rotate_a(a, 1);
	}
}

static void	bellow_median_case(t_list *to_move, t_list **a)
{
	if (a)
	{
		while ((*a)->content != to_move->content)
			rrotate_a(a, 1);
	}
}
