/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igomes-h <italogholanda@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 22:03:56 by igomes-h          #+#    #+#             */
/*   Updated: 2022/04/13 22:14:14 by igomes-h         ###   ########.fr       */
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
int		are_the_args_valid(int argc, char **argv);

#endif
