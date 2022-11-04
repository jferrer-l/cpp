/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jferrer- <jferrer-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 17:01:03 by jferrer-          #+#    #+#             */
/*   Updated: 2022/11/01 17:13:14 by jferrer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdint>
#include <iostream>
#include "Data.hpp"

uintptr_t serialize(Data* ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data*>(raw));
}

int main()
{
	Data temp;
	temp.age = 42;
	temp.name = "Ramiro Fernandez de la Fuente Tercero";

	uintptr_t ptr = serialize(&temp);

	Data *temp2 = deserialize(ptr);

	std::cout << temp2->age << std::endl;
	std::cout << temp2->name << std::endl;

}
