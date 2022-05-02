/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igomes-h <italogholanda@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 19:06:03 by igomes-h          #+#    #+#             */
/*   Updated: 2022/05/02 20:38:33 by igomes-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#define INT_MAX 2147483647
#define INT_MIN -2147483648

int	is_int(char **argv, int argc)
{
	int		i;
	int		j;
	long	n;

	i = 1;
	while (i < argc)
	{
		j = 0;
		while (j < (int)ft_strlen(argv[i]))
		{
			if (!ft_isdigit(argv[i][j]) && argv[i][j] != '-')
				return (0);
			j++;
		}
		n = ft_atol(argv[i]);
		if (n > INT_MAX || n < INT_MIN)
			return (0);
		i++;
	}
	return (1);
}

int	is_repeated(char **argv, int argc)
{
	int	i;
	int	j;
	int	tmp;

	i = 1;
	while (i < argc - 1)
	{
		tmp = ft_atoi(argv[i]);
		j = i + 1;
		while (j < argc)
		{
			if (tmp == ft_atoi(argv[j++]))
				return (1);
		}
		i++;
	}
	return (0);
}

int	is_sorted(char **argv, int argc)
{
	int	i;

	i = 0;
	while (++i < argc - 1)
	{
		if (ft_atoi(argv[i]) > ft_atoi(argv[i + 1]))
			return (0);
	}
	return (1);
}

int	are_the_args_valid(int argc, char **argv)
{
	if (argc < 3)
		return (0);
	if (!is_int(argv, argc))
	{
		ft_putstr_fd("Error", 1);
		return (0);
	}
	if (is_repeated(argv, argc))
	{
		ft_putstr_fd("Error", 1);
		return (0);
	}
	if (is_sorted(argv, argc))
		return (0);
	return (1);
}

int	is_stack_sorted(t_stack *stack_a)
{
	int	i;

	i = -1;
	while (++i < stack_a->length - 1)
	{
		if (stack_a->index[i] > stack_a->index[i + 1])
			return (0);
	}
	return (1);
}
