/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_radix_sort.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 19:06:53 by igomes-h          #+#    #+#             */
/*   Updated: 2022/07/18 23:21:37 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	bit_is_zero(int binary_number, int bits_to_shift)
{
	return (!((binary_number >> bits_to_shift) & 1));
}

void	push_zeros_to_stack_b(t_stack *stack_a,
									t_stack *stack_b,
									int bits_to_shift)
{
	int	i;
	int	stack_length;

	i = 0;
	stack_length = stack_a->length;
	while (i < stack_length)
	{
		if (bit_is_zero(stack_a->index[0], bits_to_shift))
			p(stack_a, stack_b, 'b');
		else
			r(stack_a, 'a');
		i++;
	}
}

void	push_zeros_to_stack_a(t_stack *stack_a, t_stack *stack_b)
{
	while (stack_b->length > 0)
		p(stack_b, stack_a, 'a');
}

void	radix_sort(t_stack *stack_a, t_stack *stack_b)
{
	int	bits_to_shift;

	bits_to_shift = 0;
	while (bits_to_shift <= 32)
	{
		push_zeros_to_stack_b(stack_a, stack_b, bits_to_shift);
		push_zeros_to_stack_a(stack_a, stack_b);
		bits_to_shift++;
		if (is_stack_sorted(stack_a))
			break ;
	}
}
