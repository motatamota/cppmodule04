/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tashiget <tashiget@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 22:07:23 by tashiget          #+#    #+#             */
/*   Updated: 2024/12/11 22:07:23 by tashiget         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "WrongAnimal.h"

WrongAnimal::WrongAnimal() : type("default")
{
	std::cout << type <<  ": WrongAnimal: constructor called." << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& WrongAnimal) : type(WrongAnimal.type)
{
	std::cout << type << ": WrongAnimal: copy constructor called." << std::endl;
}

WrongAnimal&	WrongAnimal::operator=(const WrongAnimal& other)
{
	if (this != &other)
	{
		type = other.type;
	}
	std::cout << type << ": WrongAnimal: copy asignment called." << std::endl;
	return (*this);
}

WrongAnimal::~WrongAnimal()
{
	std::cout << type << ": WrongAnimal: destructor called." << std::endl;
}

void	WrongAnimal::makeSound() const
{
	std::cout << type << ": WrongAnimal: ***!" << std::endl;
}

std::string	WrongAnimal::getType() const
{
	return (type);
}
