/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acigerim <acigerim@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 09:50:41 by acigerim          #+#    #+#             */
/*   Updated: 2022/09/13 09:53:08 by acigerim         ###   ########.fr       */
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

int	main(int ln, char **str)
{
	int	a;

	a = 1;
	while (a < ln)
	{
		prntstr(str[a]);
		putch('\n');
		a++;
	}
	return (0);
}
