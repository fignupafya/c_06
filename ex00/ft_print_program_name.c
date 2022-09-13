/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acigerim <acigerim@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 09:46:30 by acigerim          #+#    #+#             */
/*   Updated: 2022/09/13 09:49:43 by acigerim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putch(char c)
{
	write(1, &c, 1);
}

void	prntstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		putch(str[i]);
		i++;
	}
}

int	main(int a, char **str)
{
	a = 0;
	prntstr(str[0]);
	return (0);
}
