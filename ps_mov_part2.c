/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_mov.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igomes-h <italogholanda@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 19:22:43 by igomes-h          #+#    #+#             */
/*   Updated: 2022/04/25 20:03:15 by igomes-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
** Swap the first 2 elements at the top of stack a AND b.
*/
void	ss(t_stack *stack_a, t_stack *stack_b)
{
	int		temp;

	temp = stack_a->index[0];
	stack_a->index[0] = stack_a->index[1];
	stack_a->index[1] = temp;
	temp = stack_b->index[0];
	stack_b->index[0] = stack_b->index[1];
	stack_b->index[1] = temp;
	write(1, "ss\n", 3);
}

/*
** Shift up all elements of stack a AND b by 1.
** The first elements becomes the last ones.
*/
void	rr(t_stack *stack_a, t_stack *stack_b)
{
	int		temp;
	int		i;

	i = 0;
	temp = stack_a->index[0];
	while (i < stack_a->length)
	{
		stack_a->index[i] = stack_a->index[i + 1];
		i++;
	}
	stack_a->index[i] = temp;
	i = 0;
	temp = stack_b->index[0];
	while (i < stack_b->length)
	{
		stack_b->index[i] = stack_b->index[i + 1];
		i++;
	}
	stack_b->index[i] = temp;
	write(1, "rr\n", 3);
}

/*
** Shift down all elements of stack a OR b by 1.
** The last elements becomes the first ones.
*/
void	rr_(t_stack *stack, char c)
{
	int		temp;
	int		i;

	i = stack->length;
	temp = stack->index[stack->length - 1];
	while (--i > 0)
		stack->index[i] = stack->index[i - 1];
	stack->index[i] = temp;
	if (c == 'a')
		write(1, "rra\n", 4);
	else
		write(1, "rrb\n", 4);
}

/*
** Shift down all elements of stack a AND b by 1.
** The last element becomes the first one.
*/
void	rrr(t_stack *stack_a, t_stack *stack_b)
{
	int		temp;
	int		i;

	i = 0;
	temp = stack_a->index[stack_a->length];
	while (i < stack_a->length)
	{
		stack_a->index[i] = stack_a->index[i + 1];
		i++;
	}
	stack_a->index[i] = temp;
	i = 0;
	temp = stack_b->index[stack_b->length];
	while (i < stack_b->length)
	{
		stack_b->index[i] = stack_b->index[i + 1];
		i++;
	}
	stack_b->index[i] = temp;
	write(1, "rrr\n", 4);
}