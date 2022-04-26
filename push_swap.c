/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igomes-h <italogholanda@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 23:22:48 by igomes-h          #+#    #+#             */
/*   Updated: 2022/04/26 19:04:59 by igomes-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	populate_stack(t_stack *stack, int argc, char **argv)
{
	int	i;

	i = 0;
	while (i < argc - 1)
	{
		stack->list[i] = ft_atoi(argv[i + 1]);
		i++;
	}
}

int	main(int argc, char **argv)
{
	t_stack	*stack_a;
	t_stack	*stack_b;

	if (!are_the_args_valid(argc, argv))
		return (1);
	stack_a = stack_malloc();
	stack_b = stack_malloc();
	make_stacks(stack_a, stack_b, argc);
	populate_stack(stack_a, argc, argv);
	init_sort(stack_a, stack_b);


	ft_printf("----- ok -----\n");
	free_stacks(stack_a, stack_b);
	ft_printf("--- freed ----\n");
}
