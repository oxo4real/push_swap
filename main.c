/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaghzal <aaghzal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/24 13:13:19 by aaghzal           #+#    #+#             */
/*   Updated: 2024/12/29 19:57:23 by aaghzal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_list	*a;
	t_list	*b;
	t_moves	*moves;

	a = NULL;
	b = NULL;
	moves = NULL;
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
	sort_a(&a, &b, &moves);
	print_moves(moves);
	ft_lstclear(&a);
	ft_lstclear(&b);
	clear_moves(&moves);
	return (0);
}
