/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_to_top.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaghzal <aaghzal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 17:34:05 by aaghzal           #+#    #+#             */
/*   Updated: 2024/12/30 08:22:53 by aaghzal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	abov_median_case(t_list *to_move, t_list **a, t_moves **moves);
static void	bellow_median_case(t_list *to_move, t_list **a, t_moves **moves);

void	move_a_to_top(t_list *to_move, t_list **a, t_moves **moves)
{
	if (!to_move)
		return ;
	if (to_move->abov_median)
		abov_median_case(to_move, a, moves);
	else
		bellow_median_case(to_move, a, moves);
}

static void	abov_median_case(t_list *to_move, t_list **a, t_moves **moves)
{
	if (a)
	{
		while ((*a)->content != to_move->content)
			rotate_a(a, moves);
	}
}

static void	bellow_median_case(t_list *to_move, t_list **a, t_moves **moves)
{
	if (a)
	{
		while ((*a)->content != to_move->content)
			rrotate_a(a, moves);
	}
}
