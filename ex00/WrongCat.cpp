/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tashiget <tashiget@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 22:11:49 by tashiget          #+#    #+#             */
/*   Updated: 2024/12/11 22:11:49 by tashiget         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.h"

WrongCat::WrongCat() : WrongAnimal()
{
	type = "WrongCat";
	std::cout << type <<  ": WrongCat: constructor called." << std::endl;
}

WrongCat::WrongCat(const WrongCat& other) : WrongAnimal(other)
{
	type = "WrongCat";
	std::cout << type << ": WrongCat: copy constructor called." << std::endl;
}

WrongCat&	WrongCat::operator=(const WrongCat& other)
{
	if (this != &other)
	{
		WrongAnimal::operator=(other);
		type = "WrongCat";
	}
	std::cout << type << ": WrongCat: copy asignment called." << std::endl;
	return (*this);
}

WrongCat::~WrongCat()
{
	std::cout << type << ": WrongCat: destructor called." << std::endl;
}

void	WrongCat::makeSound() const
{
	std::cout << type << ": Dog: Meaw!" << std::endl;
}
