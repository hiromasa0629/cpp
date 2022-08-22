/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyap <hyap@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 20:53:35 by hyap              #+#    #+#             */
/*   Updated: 2022/08/22 15:25:48 by hyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

/* Check same side
	Example: // Assume all z = 0, and because of right-hand-rule, i*j=k, j*i=-k, i*i=0, j*j=0
	A = (2, 2);
	B = (6, 6);
	C = (0, 5);
	P = (2, 4);
	
	// Cross product of (B - A) and (P - A), determine its pointing direction
	B - A = (6, 6) - (2, 2) = (4, 4);
	P - A = (2, 4) - (2, 2) = (0, 2);
	(4, 4) x (0, 2) = (4i + 4j) x (0i + 2j)
					= 0(i*i) + 8(i*j) + 0(j*i) + 8(j*j)
					= 8k
					= (0, 0, 8);
					= (a1 * b1, a2 * b2, (a1 * b2) - (a2 * b1))
					= 8 = (a1 * b2) - (a2 * b1)
					= det|(a1, a2) (b1, b2)| = Area of parellelogram

	a1 = B1 - A1;
	a2 = B2 - A2;
	b1 = P1 - A1;
	b2 = P2 - A2;

	8 = (a1 * b2) - (a2 * b1) = ((B1 - A1) * (P2 - A2)) - ((B2 - A2) * (P1 - A1));

	// Cross product of (B - A) and (C - A), determine its pointing direction
	B - A = (4, 4);
	C - A = (0, 5) - (2, 2) = (-2, 3);
	(4, 4) x (-2, 3) = (4i + 4j) x (-2i + 3j)
					= -8(i*i) + 12(i*j) + -8(j*i) + 12(j*j)
					= 0 + 12k + 8k + 0;
					= (0 , 0, 20);

	// Dot product of ((B-A)x(P-A)) and ((B-A)x(C-A))
	// Positive = same direction, Negative = opposite direction
	
	(0, 0, 8)•(0, 0, 20) = 8*20 = 160 >= 0 = same side
	= (B1 - A1) * (P2 - A2)) - ((B2 - A2) * (P1 - A1) *
	  (B1 - A1) * (C2 - A2)) - ((B2 - A2) * (C1 - A1)

	sameSide(A, B, C, P)
	sameSide(B, C, A, P
	sameSide(C, A, B, P)
	if (allSameSide = true) return (true);
*/

float	isSameSide(const Point p1, const Point p2, const Point p3, const Point point) // 2D cross produc
{
	float	det1;
	float	det2;
	
	det1 = ((p2.getX() - p1.getX()) * (point.getY() - p1.getY())) - \
			((p2.getY() - p1.getY()) * (point.getX() - p1.getX()));
	det2 = ((p2.getX() - p1.getX()) * (p3.getY() - p1.getY())) - \
			((p2.getY() - p1.getY()) * (p3.getX() - p1.getX()));
	std::cout << "det1: " << det1 << std::endl;
	return ((det1 * det2) >= 0);
}

/* Barycentric Technique
	P = A + u(C - A) + v(B - A)
	(P - A) = u(C - A) + v(B - A)
	v0 = u(v1) + v(v2) 
	
	// Two unknown so multiply by v0 and v1
	v0•v0 = u(v1•v0) + v(v2•v0)
	v0•v1 = u(v1•v1) + v(v2•v1)
	
	dot00 = v0•v0;
	dot01 = v0•v1;
	dot02 = v2•v0;
	dot11 = v1•v1;
	dot12 = v1•v2;
	
	dot00 = u(dot01) + v(dot02)
	dot01 = u(dot11) + v(dot12)

	x = (dot00)(dot12) - (dot02)(dot01) / (dot01)(dot12) - (dot02)(dot11)
	y = (dot00)(dot11) - (dot01)(dot01) / (dot01)(dot12) - (dot02)(dot11)	
*/

bool	barycentricTechnique(const Point a, const Point b, const Point c, const Point point)
{
	// (P - A) = u(C - A) + v(B - A)
	Point	v0(Point::substract(c, a));
	Point	v1(Point::substract(b, a));
	Point	v2(Point::substract(point , a));
	// Two unknown so multiply by v0 and v1
	// v2•v0 = u(v0•v0) + v(v1•v0)
	// v2•v1 = u(v0•v1) + v(v1•v1)
	float	dot00 = Point::dotProduct(v0, v0);
	float	dot01 = Point::dotProduct(v0, v1);
	float	dot02 = Point::dotProduct(v0, v2);
	float	dot11 = Point::dotProduct(v1, v1);
	float	dot12 = Point::dotProduct(v1, v2);
	
	// dot02 = u(dot00) + v(dot01);
	// dot12 = u(dot01) + v(dot11);
	float	det = (dot00 * dot11) - (dot01 * dot01);
	float	u = ((dot02 * dot11) - (dot12 * dot01)) / det;
	float	v = ((dot00 * dot12) - (dot01 * dot02)) / det;
	
	if (u >= 0 && v >= 0 && (u + v) < 1)
		return (true);
	return (false);
}

bool	bsp(const Point a, const Point b, const Point c, const Point point)
{
	//Using same side method
	// if (isSameSide(a, b, c, point) && isSameSide(b, c, a, point) && isSameSide(c, a, b, point))
	// 	return (true);
	
	if (barycentricTechnique(a, b, c, point))
		return (true);
	return (false);
}
