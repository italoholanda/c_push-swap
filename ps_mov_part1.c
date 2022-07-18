/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_mov_part1.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igomes-h <italogholanda@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 19:10:25 by igomes-h          #+#    #+#             */
/*   Updated: 2022/05/02 20:41:24 by igomes-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
** Swap the first 2 elements at the top of stack a OR b.
*/
void	s(t_stack *stack, char key)
{
	int	tmp;

	tmp = stack->index[0];
	stack->index[0] = stack->index[1];
	stack->index[1] = tmp;
	if (key == 'a')
		ft_putstr_fd("sa\n", 1);
	else
		ft_putstr_fd("sb\n", 1);
}

/*
** Take the first element at the top of b and put it at the top of a OR b.
** Do nothing if it is empty
*/
void	p(t_stack *stack_a, t_stack *stack_b, char key)
{
	shift_down_stack(stack_b);
	stack_b->index[0] = stack_a->index[0];
	shift_up_stack(stack_a);
	stack_b->length++;
	stack_a->length--;
	if (key == 'a')
		ft_putstr_fd("pa\n", 1);
	else
		ft_putstr_fd("pb\n", 1);
}

/*
** Shift up all elements of stack a OR b by 1.
** The first element becomes the last one.
*/
void	r(t_stack *stack, char key)
{
	int	temp;
	int	i;

	i = 0;
	temp = stack->index[0];
	while (i < stack->length)
	{
		stack->index[i] = stack->index[i + 1];
		i++;
	}
	stack->index[i - 1] = temp;
	if (key == 'a')
		ft_putstr_fd("ra\n", 1);
	else
		ft_putstr_fd("rb\n", 1);
}
