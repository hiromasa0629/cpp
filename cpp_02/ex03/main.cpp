/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyap <hyap@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 20:56:12 by hyap              #+#    #+#             */
/*   Updated: 2022/08/31 16:37:57 by hyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"
#include <vector>
#include <sstream>

std::ostream	&operator<<(std::ostream &o, std::vector<int> rhs)
{
	for(std::vector<int>::iterator it = rhs.begin(); it != rhs.end(); it++)
	{
		if (it == rhs.begin())
			o << "[";
		o << *it;
		if (it != std::prev(rhs.end()))
			o << ",";
		else
			o << "]";
	}
	return (o);
}

std::vector<int> ft_split(char *s, char sep)
{
	std::stringstream			ss;
	std::vector<int>			res;
	std::string					seg;

	ss << s;
	while (std::getline(ss, seg, sep))
		res.push_back(std::atoi(seg.c_str()));
	return (res);

}

std::vector< std::vector<int> >	parse_arg(int ac, char **av)
{
	std::vector<int>				plot;
	std::vector< std::vector<int> >	plots;

	for (int i = 1; i < ac; i++)
	{
		plot = ft_split(av[i], ',');
		if (i == 1)
			std::cout << "a: ";
		else if (i == 2)
			std::cout << "b: ";
		else if (i == 3)
			std::cout << "c: ";
		else if (i == 4)
			std::cout << "point: ";
		std::cout << plot << std::endl;
		plots.push_back(plot);
	}
	return (plots);
}

bool	is_plot(std::vector< std::vector<int> > plots, int y, int x)
{
	for (std::vector< std::vector<int> >::iterator it = plots.begin(); it != std::prev(plots.end()); it++)
	{
		if (*((*it).begin()) == x && *(std::prev((*it).end())) == y)
			return (true);
	}
	return (false);
}

bool	is_point(std::vector< std::vector<int> > plots, int y, int x)
{
	if (plots.back().front() == x && plots.back().back() == y)
		return (true);
	return (false);
}
void	print_dots(std::vector< std::vector<int> > plots)
{
	int	min_x;
	int	min_y;
	int	max_x;
	int	max_y;

	min_x = *(*plots.begin()).begin();
	max_x = *(*plots.begin()).begin();
	min_y = *std::prev((*plots.begin()).end());
	max_y = *std::prev((*plots.begin()).end());
	for (std::vector< std::vector<int> >::iterator it = plots.begin(); it != plots.end(); it++)
	{
		for(std::vector<int>::iterator it2 = (*it).begin(); it2 != (*it).end(); it2++)
		{
			if (it2 == (*it).begin() && *it2 < min_x)
				min_x = *it2;
			if (it2 == (*it).begin() && *it2 > max_x)
				max_x = *it2;
			if (it2 == std::prev((*it).end()) && *it2 < min_y)
				min_y = *it2;
			if (it2 == std::prev((*it).end()) && *it2 > max_y)
				max_y = *it2;
		}
	}


	std::cout << "==============================" << std::endl;
	std::cout << "min_x: " << min_x << std::endl;
	std::cout << "max_x: " << max_x << std::endl;
	std::cout << "min_y: " << min_y << std::endl;
	std::cout << "max_y: " << max_y << std::endl;
	std::cout << "==============================" << std::endl;

	std::vector< std::vector<int> > graph;
	std::vector<int>				x_axis;

	int	x_start;
	int	y_start;

	x_start = min_x;
	y_start = max_y;
	for (int i = y_start; i > min_y - 1; i--)
	{
		x_axis.clear();
		for (int j = x_start; j < max_x + 1; j++)
		{
			std::cout << "[" << j << "," << i << "]";
			if (j != max_x)
				std::cout << " ";
		}

		std::cout << std::endl;
	}
	for (int i = y_start; i > min_y - 1; i--)
	{
		for (int j = x_start; j < max_x + 1; j++)
		{
			x_axis.push_back(j);
			if (is_point(plots, i, j))
				std::cout << "o";
			else if (!is_plot(plots, i, j))
				std::cout << ".";
			else
				std::cout << "@";
			if (j != max_x)
				std::cout << " ";
		}
		std::cout << std::endl;
		graph.push_back(x_axis);
	}
}

int main(int ac, char **av)
{
	std::vector< std::vector<int> >	plots;

	if (ac != 5)
	{
		std::cout << "Usage:"
				<< "./main \"<x1>,<y2>\" \"<x2>,<y2>\" \"<x3>,<y3>\" \"<x>,<y>\""
				<< std::endl;
		return (0);
	}
	plots = parse_arg(ac, av);
	print_dots(plots);

	std::vector< std::vector<int> >::iterator	it;
	it = plots.begin();
	Point	p1((*it).front(), (*it).back());
	it++;
	Point	p2((*it).front(), (*it).back());
	it++;
	Point	p3((*it).front(), (*it).back());
	it++;
	Point	p4((*it).front(), (*it).back());

	if (bsp(p1, p2, p3, p4))
		std::cout << p4 << " is in triangle";
	else
		std::cout << p4 << "Not in triangle";
	std::cout << std::endl;
	return (0);
}
