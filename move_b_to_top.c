/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_b_to_top.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaghzal <aaghzal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 17:34:05 by aaghzal           #+#    #+#             */
/*   Updated: 2025/01/01 17:55:46 by aaghzal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	abov_median_case(t_list *to_move, t_list **lst);
static void	bellow_median_case(t_list *to_move, t_list **lst);

void	move_b_to_top(t_list *to_move, t_list **lst)
{
	if (!to_move)
		return ;
	if (to_move->abov_median)
		abov_median_case(to_move, lst);
	else
		bellow_median_case(to_move, lst);
}

static void	abov_median_case(t_list *to_move, t_list **lst)
{
	if (lst)
	{
		while ((*lst)->content != to_move->content)
			rotate_b(lst, 1);
	}
}

static void	bellow_median_case(t_list *to_move, t_list **lst)
{
	if (lst)
	{
		while ((*lst)->content != to_move->content)
			rrotate_b(lst, 1);
	}
}
