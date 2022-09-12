/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jferrer- <jferrer-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 15:58:55 by jferrer-          #+#    #+#             */
/*   Updated: 2022/09/12 16:21:36 by jferrer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::~Point()
{}

Point::Point():	x(0), y(0)
{}

Point::Point(const float x, const float y): x(x), y(y)
{}

Point::Point(const Point& newpoint): x(newpoint.getX()), y(newpoint.getY())
{}

Fixed	Point::getX() const
{
	return this->x;
}

Fixed	Point::getY() const
{
	return (this->y);
}

Point&	Point::operator= (const Point& newpoint)
{
	(void)newpoint;
	return *this;
}
