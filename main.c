/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaghzal <aaghzal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/24 13:13:19 by aaghzal           #+#    #+#             */
/*   Updated: 2025/01/01 11:40:09 by aaghzal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
	set_ind(a);
	sort_a(&a, &b);
	ft_lstclear(&a);
	ft_lstclear(&b);
	return (0);
}
