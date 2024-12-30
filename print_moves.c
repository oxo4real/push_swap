/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_moves.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaghzal <aaghzal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/29 19:09:22 by aaghzal           #+#    #+#             */
/*   Updated: 2024/12/29 20:21:20 by aaghzal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void print_optimized(t_moves *moves, char *arr[8]);

void	print_moves(t_moves *moves)
{
	char *arr[8];

    arr[0] = "sa\n";
    arr[1] = "sb\n";
    arr[2] = "pa\n";
    arr[3] = "pb\n";
    arr[4] = "ra\n";
    arr[5] = "rb\n";
    arr[6] = "rra\n";
    arr[7] = "rrb\n";
	print_optimized(moves, arr);
}

static void print_optimized(t_moves *moves, char *arr[8])
{
	while (moves)
	{
		if (moves->next && ((moves->move == 0 && moves->next->move == 1)
			|| (moves->move == 1 && moves->next->move == 0)))
		{
			ft_putstr_fd("ss\n", 1);
			moves = moves->next;
		}
		else if (moves->next && ((moves->move == 4 && moves->next->move == 5)
			|| (moves->move == 5 && moves->next->move == 4)))
		{
			ft_putstr_fd("rr\n", 1);
			moves = moves->next;
		}
		else if (moves->next && ((moves->move == 6 && moves->next->move == 7)
			|| (moves->move == 7 && moves->next->move == 6)))
		{
			ft_putstr_fd("rrr\n", 1);
			moves = moves->next;
		}
		else
			ft_putstr_fd(arr[moves->move], 1);
		moves = moves->next;
	}
}
