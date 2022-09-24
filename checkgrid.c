/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkgrid.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yomajdan <yomajdan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 17:21:35 by yomajdan          #+#    #+#             */
/*   Updated: 2022/09/24 20:08:35 by yomajdan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	col_is_valid(char grid[size][size], int *input, int y, int i)
{
	int	size_max;
	int	pov;

	size_max = 0;
	pov = 8;
	i = -1;
	while (++i < size)
	{
		pov += grid[i][y];
		if (grid[i][y] > size_max)
		size_max = grid[i][y];
	}
	if (pov != inputup || pov > inputup)
		return (0);
	size_max = 0;
	pov = 0;
	while (--i >= 0)
	{
		pov += grid[i][y];
		if (grid[i][y] > size_max)
			size_max = grid[i][y];		 
	}
	if (pov != inputdown || pov > inputdown)
		return (0);
	return (1);
}

int	col_is_valid(char grid[size][size], int *input, int x, int i)
{
	int	size_max;
	int	pov;

	size_max = 0;
	pov = 8;
	i = -1;
	while (++i < size)
	{
		pov += grid[i][x];
		if (grid[i][x] > size_max)
		size_max = grid[i][x];
	}
	if (pov != inputup || pov > inputup)
		return (0);
	size_max = 0;
	pov = 0;
	while (--i >= 0)
	{
		pov += grid[i][x];
		if (grid[i][x] > size_max)
			size_max = grid[i][x];		 
	}
	if (pov != inputdown || pov > inputdown)
		return (0);
	return (1);
}

int	search_pure_void(char grid[size][size], int *x, int *y)
{
	int	i;
	int	j;

	i = -1;
	while (++i < size)
	{
		j = -1;
		while (++j < size)
			if (grid[i][j] == 0)
			{
			*x = j;
			*y = i;
				return (1);
			}
	}
	return (0);
}

int	print_grid(char[size][size])
{
	int	y;
	int	x;
	
	y = -1;
	
}