/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jferrer- <jferrer-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 15:58:59 by jferrer-          #+#    #+#             */
/*   Updated: 2022/09/12 17:23:09 by jferrer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

static Fixed calcArea(Point a, Point b, Point c);

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
	Fixed ta = calcArea(a, b, c);
	Fixed ab = calcArea(a, b, point);
	Fixed ac = calcArea(a, c, point);
	Fixed bc = calcArea(b, c, point);

	if ((point.getX() == a.getX() && point.getY() == a.getY()) || (point.getX() == b.getX() && point.getY() == b.getY()) || (point.getX() == c.getX() && point.getY() == c.getY()))
		return (false);

	if (ab == 0 || ac == 0 || bc == 0)
		return false;

	if ((ab + ac + bc) > ta)
		return (false);
	return true;
}

static Fixed calcArea(Point a, Point b, Point c)
{
	Fixed temp;
	temp = ((a.getX() - c.getX()) * (b.getY() - c.getY()) - (b.getX() - c.getX()) * (a.getY() - c.getY()));
	return (temp / 2.0f);
}
