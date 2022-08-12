/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jferrer- <jferrer-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 13:51:06 by jferrer-          #+#    #+#             */
/*   Updated: 2022/08/11 15:39:43 by jferrer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(int argc, char **argv)
{
	bool	empty = true;

	for (int i = 1; argv[i]; i++)
		if (argv[i][0])
			empty = false;
	if (argc < 2 || empty)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
		for(int i = 1; argv[i]; i++)
			for(int j = 0; argv[i][j]; j++)
				std::cout << (char)std::toupper(argv[i][j]);
	std::cout << std::endl;
	return 0;
}
/*


// Base class (parent)
class MyClass {
	private:
		int x;
	public:
		void myFunction() {
		std::cout << "Some content in parent class." ;
		}
		MyClass(int nx = 5)
		{
			x = nx;
		}
		int getX()
		{
			return (x);
		}
};

// Derived class (child)
class MyChild: public MyClass {
};

// Derived class (grandchild)
class MyGrandChild: public MyChild {
};

int main() {
  MyChild myObj;
  myObj.myFunction();
  std::cout << myObj.getX();
  return 0;
}*/
