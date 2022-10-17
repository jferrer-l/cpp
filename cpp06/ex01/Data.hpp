/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jferrer- <jferrer-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 18:03:21 by jferrer-          #+#    #+#             */
/*   Updated: 2022/10/13 18:06:13 by jferrer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
#define DATA_HPP

#include <iostream>

class Data
{
	private:
	int			intvalue;
	std::string	stringvalue;

	public:
	~Data();
	Data();
	Data(int, std::string);
	Data(const Data &);
	Data &operator=(const Data &);

	int			getInt();
	std::string	getString();
};

#endif
