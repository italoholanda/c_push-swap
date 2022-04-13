
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

t_stack	*ps_malloc(void);
int		mk_stacks(t_stack *stack_a, t_stack *stack_b, int argc);
void	free_stacks(t_stack *stack_a, t_stack *stack_b);
void	check_args(int argc, char **argv, t_stack *s_a, t_stack *s_b);

#endif
