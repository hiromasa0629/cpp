/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyap <hyap@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 20:42:19 by hyap              #+#    #+#             */
/*   Updated: 2022/08/22 14:42:54 by hyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_H
# define POINT_H
# include "Fixed.hpp"
# include <iostream>
# include <cmath>
# include <vector>

class Point {
	public:
		Point(void);
		Point(const Point &a);
		~Point(void);
		Point(const float n1, const float n2);

		Point	&operator=(const Point &rhs);
		Point	operator-(const Point &rhs) const;
		
		static Point	substract(const Point a, const Point b);
		static float	dotProduct(const Point a, const Point b);
		
		float getX(void) const;
		float getY(void) const;
	
	private:
		const Fixed	_x;
		const Fixed _y;
};


bool			bsp(const Point a, const Point b, const Point c, const Point point);
std::ostream	&operator<<(std::ostream &o, const Point &rhs);

#endif
