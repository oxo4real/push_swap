/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaghzal <aaghzal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/24 13:13:40 by aaghzal           #+#    #+#             */
/*   Updated: 2025/01/06 16:42:33 by aaghzal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <limits.h>

typedef struct s_list
{
	int				content;
	unsigned int	index;
	int				ismin;
	int				ismax;
	int				abov_median;
	struct s_list	*target;
	struct s_list	*next;
	struct s_list	*prev;
}				t_list;

void	set_ind(t_list *a);
void	push_a(t_list **a, t_list **b, int print);
void	push_b(t_list **a, t_list **b, int print);
void	swap_a(t_list **a, int print);
void	swap_b(t_list **b, int print);
void	rotate_a(t_list **a, int print);
void	rotate_b(t_list **b, int print);
void	rrotate_a(t_list **a, int print);
void	rrotate_b(t_list **b, int print);
size_t	ft_strlen(const char *s);
int		ft_isdigit(char c);
int		validate_input(int ac, char **av);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char const *s, int fd);
void	ft_lstadd_back(t_list **lst, t_list *new_element);
void	ft_lstadd_front(t_list **lst, t_list *new_element);
void	ft_lstclear(t_list **lst);
t_list	*ft_lstlast(t_list *lst);
t_list	*ft_lstnew(int content);
int		parse(t_list **a, int ac, char **av);
char	**ft_split(char const *s, char c);
void	free_str_arr(char **str_arr);
int		ft_atoi(const char *nptr);
int		ft_strcmp(const char *s1, const char *s2);
int		dup_check_av(int ac, char **av);
int		dup_check_str(char *s);
int		ft_intcmp(char *w1, char *w2);
int		ft_isint(char *w);
void	print_err(char *message, int exit_code);
int		int_check(int ac, char **av);
int		dup_check(t_list *a);
int		issorted(t_list *list);
int		ft_lstsize(t_list *lst);
void	sort_a(t_list **a, t_list **b);
void	curr_ind(t_list	*lst);
void	set_cost(t_list *lst);
void	move_b_to_top(t_list *to_move, t_list **lst);
t_list	*get_cheapest(t_list *lst);
void	send_to_b(t_list **a, t_list **b);
void	sort_3(t_list **a);
void	set_target_b(t_list *a, t_list *b);
void	init_b(t_list *a, t_list *b);
void	move_a_to_top(t_list *to_move, t_list **a);
void	send_to_stack_a(t_list **a, t_list **b);
void	set_target_b(t_list *a, t_list *b);

#endif
