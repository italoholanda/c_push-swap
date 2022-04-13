/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_stack.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igomes-h <italogholanda@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 18:42:44 by igomes-h          #+#    #+#             */
/*   Updated: 2022/04/12 20:29:56 by igomes-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack *ps_malloc(void)
{
	t_stack *stack;

	stack = malloc(sizeof(t_stack));
	if (!stack)
		exit(1);
	return (stack);
}

int mk_stacks(t_stack *stack_a, t_stack *stack_b, int argc)
{
	stack_a->length = argc - 1;
	stack_a->list = malloc(sizeof(int) * argc);
	if (!stack_a->list)
		exit(1);
	stack_a->index = malloc(sizeof(int) * argc);
	if (!stack_a->index)
	{
		free(stack_a->list);
		exit(1);
	}
	stack_b->length = 0;
	stack_b->index = malloc(sizeof(int) * argc);
	if (!stack_b->index)
	{
		free(stack_a->list);
		free(stack_a->index);
		exit(1);
	}
	ft_bzero(stack_b->index, stack_a->length);
	return (0);
}

void free_stacks(t_stack *stack_a, t_stack *stack_b)
{
	free(stack_a->list);
	free(stack_a->index);
	free(stack_b->index);
  free(stack_a);
  free(stack_b);
}
