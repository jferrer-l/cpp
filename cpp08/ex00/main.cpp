/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jferrer- <jferrer-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 17:14:04 by jferrer-          #+#    #+#             */
/*   Updated: 2022/11/18 20:10:36 by jferrer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "easyfind.hpp"
#include <vector>
#include <list>

int main()
{
	std::vector<int> vec;

	vec.push_back(1);
	vec.push_back(2);
	vec.push_back(4);
	vec.push_back(3);
	vec.push_back(5);
	vec.push_back(0);
	vec.push_back(5);
	std::cout << *easyfind(vec, 4) << std::endl;
	std::cout << *easyfind(vec, 5) << std::endl;

	try { std::cout << *easyfind(vec, 42) << std::endl; }
	catch(const std::exception& e) { std::cerr << e.what() << '\n'; }

	std::list<int> lis;

	lis.push_back(3);
	lis.push_back(2);
	lis.push_back(5);
	lis.push_back(4);
	lis.push_back(10);

	std::cout << *easyfind(lis, 3) << std::endl;
	std::cout << *easyfind(lis, 10) << std::endl;

	try { std::cout << *easyfind(lis, 42) << std::endl; }
	catch(const std::exception& e) { std::cerr << e.what() << '\n'; }

	return (0);
}
