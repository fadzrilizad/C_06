/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fizad <fizad@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 15:05:18 by fizad             #+#    #+#             */
/*   Updated: 2023/08/22 15:17:13 by fizad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

int	main(int ac, char **av)
{
	int	i;
	int	j;

	i = ac - 1;
	j = 1;
	if (ac < 1)
	{
		ft_putchar('\n');
		return (0);
	}
	else
	{
		while (i > 0)
		{
			ft_putstr(av[j]);
			ft_putchar('\n');
			j++;
			i--;
		}
	}
	return (0);
}
