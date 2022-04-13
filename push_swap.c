/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igomes-h <italogholanda@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 23:22:48 by igomes-h          #+#    #+#             */
/*   Updated: 2022/04/12 21:48:56 by igomes-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*stack_a;
	t_stack	*stack_b;

	stack_a = ps_malloc();
	stack_b = ps_malloc();
	mk_stacks(stack_a, stack_b, argc);
	check_args(argc, argv, stack_a, stack_b);
	ft_printf("ok");
	free_stacks(stack_a, stack_b);
	if (argv)
		return (1);
}
