/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igomes-h <italogholanda@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 22:03:56 by igomes-h          #+#    #+#             */
/*   Updated: 2022/05/02 19:58:19 by igomes-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "./libft/include/ft_printf.h"
# include "./libft/include/libft.h"

typedef struct s_stack
{
	int	*list;
	int	*index;
	int	length;
	int	largest;
}		t_stack;

t_stack	*stack_malloc(void);
int		make_stacks(t_stack *stack_a, t_stack *stack_b, int argc);
void	free_stacks(t_stack *stack_a, t_stack *stack_b);
void	shift_up_stack(t_stack *stack);
void	shift_down_stack(t_stack *stack);
int		are_the_args_valid(int argc, char **argv);
int		is_stack_sorted(t_stack *stack_a);
void	s(t_stack *stack, char key);
void	p(t_stack *stack_a, t_stack *stack_b, char key);
void	r(t_stack *stack, char key);
void	ss(t_stack *stack_a, t_stack *stack_b);
void	rr(t_stack *stack_a, t_stack *stack_b);
void	rr_(t_stack *stack, char c);
void	rrr(t_stack *stack_a, t_stack *stack_b);
void	sort_index(t_stack *stack_a);
void	init_sort(t_stack *stack_a, t_stack *stack_b);
void	sort_small_stack(t_stack *stack_a, t_stack *stack_b);
void	five_sort(t_stack *stack_a, t_stack *stack_b);
void	three_sort(t_stack *stack_a);
void	radix_sort(t_stack *stack_a, t_stack *stack_b);

#endif
