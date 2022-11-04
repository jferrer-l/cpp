/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jferrer- <jferrer-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 17:41:11 by jferrer-          #+#    #+#             */
/*   Updated: 2022/11/03 20:27:02 by jferrer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <cstdlib>
#include <iostream>

Base* generate(void);
void identify(Base* p);
void identify(Base& p);

int main()
{
	Base *base;
	base = generate();
	identify(base);
	B b;
	Base *base2 = &b;
	identify(*base2);
}

Base* generate(void)
{
	srand(time(NULL));
	switch (rand() % 3)
	{
		case 0:
		{
			A *new_a = new A();
			std::cout << "original value is A\n";
			return (new_a);
		}
		case 1:
		{
			B *new_b = new B();
			std::cout << "original value is B\n";
			return (new_b);
		}
		default:
		{
			C *new_c = new C();
			std::cout << "original value is C\n";
			return (new_c);
		}
	}
}

void identify(Base* p)
{
	A* atemp = dynamic_cast<A *>(p);
	if (atemp != NULL)
		std::cout << "The pointer is an A class\n";
	B* btemp = dynamic_cast<B *>(p);
	if (btemp != NULL)
		std::cout << "The pointer is a B class\n";
	C* ctemp = dynamic_cast<C *>(p);
	if (ctemp != NULL)
		std::cout << "The pointer is a C class\n";
}

void identify(Base& p)
{
	try
	{
		A & atemp = dynamic_cast<A &>(p);
		(void)atemp;
		std::cout << "The reference is an A class\n";
	}
	catch(std::bad_cast &p)
	{}
	try
	{
		B & btemp = dynamic_cast<B &>(p);
		(void)btemp;
		std::cout << "The reference is a B class\n";
	}
	catch(std::bad_cast &p)
	{}
	try
	{
		C & ctemp = dynamic_cast<C &>(p);
		(void)ctemp;
		std::cout << "The reference is a C class\n";
	}
	catch(std::bad_cast &p)
	{}

}
