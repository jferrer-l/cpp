/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jferrer- <jferrer-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 20:55:09 by jferrer-          #+#    #+#             */
/*   Updated: 2022/09/12 22:36:18 by jferrer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"
#include <iostream>

int main( void ) {

{
	std::cout << "Test 1: (Point inside the triangle)\n";
	Point p1(1.0f, 1.0f);
	Point p2(2.0f, 1.0f);
	Point p3(1.5f, 2.0f);

	Point point(1.5, 1.5);

	std::cout << "p1 is in: " << p1.getX() << ',' << p1.getY() << std::endl;
	std::cout << "p2 is in: " << p2.getX() << ',' << p2.getY() << std::endl;
	std::cout << "p3 is in: " << p3.getX() << ',' << p3.getY() << std::endl;

	std::cout << "point is in: " << point.getX() << ',' << point.getY() << std::endl;
	std::cout << "point is inside: " << bsp(p1, p2, p3, point) << std::endl;
}
{
	std::cout << "\nTest 2: (Point in one vertex)\n";
	Point p1(1.0f, 1.0f);
	Point p2(2.0f, 1.0f);
	Point p3(1.5f, 2.0f);

	Point point(1.0, 1.0);

	std::cout << "p1 is in: " << p1.getX() << ',' << p1.getY() << std::endl;
	std::cout << "p2 is in: " << p2.getX() << ',' << p2.getY() << std::endl;
	std::cout << "p3 is in: " << p3.getX() << ',' << p3.getY() << std::endl;

	std::cout << "point is in: " << point.getX() << ',' << point.getY() << std::endl;
	std::cout << "point is inside: " << bsp(p1, p2, p3, point) << std::endl;
}
{
	std::cout << "\nTest 3: (Point in one edge)\n";
	Point p1(1.0f, 1.0f);
	Point p2(2.0f, 1.0f);
	Point p3(1.5f, 2.0f);

	Point point(1.5, 1.0);

	std::cout << "p1 is in: " << p1.getX() << ',' << p1.getY() << std::endl;
	std::cout << "p2 is in: " << p2.getX() << ',' << p2.getY() << std::endl;
	std::cout << "p3 is in: " << p3.getX() << ',' << p3.getY() << std::endl;

	std::cout << "point is in: " << point.getX() << ',' << point.getY() << std::endl;
	std::cout << "point is inside: " << bsp(p1, p2, p3, point) << std::endl;
}
{
	std::cout << "\nTest 4: (Point outside the triangle)\n";
	Point p1(1.0f, 1.0f);
	Point p2(2.0f, 1.0f);
	Point p3(1.5f, 2.0f);

	Point point(1.5, 4.0);

	std::cout << "p1 is in: " << p1.getX() << ',' << p1.getY() << std::endl;
	std::cout << "p2 is in: " << p2.getX() << ',' << p2.getY() << std::endl;
	std::cout << "p3 is in: " << p3.getX() << ',' << p3.getY() << std::endl;

	std::cout << "point is in: " << point.getX() << ',' << point.getY() << std::endl;
	std::cout << "point is inside: " << bsp(p1, p2, p3, point) << std::endl;
}
return 0;
}
