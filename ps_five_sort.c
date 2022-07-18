/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_five_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 23:22:52 by coder             #+#    #+#             */
/*   Updated: 2022/07/18 23:24:35 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_smallest_to_top(int smallest_number, t_stack *stack_a)
{
	while (stack_a->index[0] != smallest_number)
		r(stack_a, 'a');
}

void	five_sort(t_stack *stack_a, t_stack *stack_b)
{
	push_smallest_to_top(1, stack_a);
	p(stack_a, stack_b, 'b');
	push_smallest_to_top(2, stack_a);
	p(stack_a, stack_b, 'b');
	three_sort(stack_a);
	p(stack_b, stack_a, 'a');
	p(stack_b, stack_a, 'a');
}
