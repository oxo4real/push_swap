/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaghzal <aaghzal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/01 15:06:39 by aaghzal           #+#    #+#             */
/*   Updated: 2025/01/02 12:48:25 by aaghzal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "get_next_line_bonus.h"

static void	do_moves(t_list **a, t_list **b);
static int	move_exe(t_list **a, t_list **b, char *move);
static void	ft_panic(t_list **a, t_list **b, char *move);

int	main(int ac, char **av)
{
	t_list	*a;
	t_list	*b;

	a = NULL;
	b = NULL;
	if (ac < 2)
		return (0);
	if (!validate_input(ac, av))
		print_err("Error\n", 1);
	if (!parse(&a, ac, av))
		print_err("failed while parsing :(\n", 1);
	if (!dup_check(a))
	{
		ft_lstclear(&a);
		print_err("Error\n", 1);
	}
	do_moves(&a, &b);
	if (!b && issorted(a))
		ft_putstr_fd("OK\n", 1);
	else
		ft_putstr_fd("KO\n", 1);
	ft_lstclear(&a);
	ft_lstclear(&b);
	return (0);
}

static void	do_moves(t_list **a, t_list **b)
{
	char	*move;

	while (1)
	{
		move = get_next_line(0);
		if (!move)
			break ;
		if (!move_exe(a, b, move))
			ft_panic(a, b, move);
		free(move);
	}
}

static int	move_exe(t_list **a, t_list **b, char *move)
{
	if (ft_strcmp(move, "pa\n") == 0)
		return (push_a(a, b, 0), 1);
	if (ft_strcmp(move, "pb\n") == 0)
		return (push_b(a, b, 0), 1);
	if (ft_strcmp(move, "sa\n") == 0)
		return (swap_a(a, 0), 1);
	if (ft_strcmp(move, "sb\n") == 0)
		return (swap_b(b, 0), 1);
	if (ft_strcmp(move, "ss\n") == 0)
		return (swap_a(a, 0), swap_b(b, 0), 1);
	if (ft_strcmp(move, "ra\n") == 0)
		return (rotate_a(a, 0), 1);
	if (ft_strcmp(move, "rb\n") == 0)
		return (rotate_b(b, 0), 1);
	if (ft_strcmp(move, "rr\n") == 0)
		return (rotate_b(b, 0), rotate_a(a, 0), 1);
	if (ft_strcmp(move, "rra\n") == 0)
		return (rrotate_a(a, 0), 1);
	if (ft_strcmp(move, "rrb\n") == 0)
		return (rrotate_b(b, 0), 1);
	if (ft_strcmp(move, "rrr\n") == 0)
		return (rrotate_b(b, 0), rrotate_a(a, 0), 1);
	return (0);
}

static void	ft_panic(t_list **a, t_list **b, char *move)
{
	ft_lstclear(a);
	ft_lstclear(b);
	free(move);
	print_err("Error\n", 1);
}
