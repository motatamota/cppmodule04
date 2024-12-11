/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tashiget <tashiget@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 22:11:49 by tashiget          #+#    #+#             */
/*   Updated: 2024/12/11 22:11:49 by tashiget         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.h"

Cat::Cat() : Animal()
{
	type = "Cat";
	std::cout << type <<  ": Cat: constructor called." << std::endl;
}

Cat::Cat(const Cat& other) : Animal(other)
{
	type = "Cat";
	std::cout << type << ": Cat: copy constructor called." << std::endl;
}

Cat&	Cat::operator=(const Cat& other)
{
	if (this != &other)
	{
		Animal::operator=(other);
		type = "Cat";
	}
	std::cout << type << ": Cat: copy asignment called." << std::endl;
	return (*this);
}

Cat::~Cat()
{
	std::cout << type << ": Cat: destructor called." << std::endl;
}

void	Cat::makeSound() const
{
	std::cout << type << ": Dog: Meaw!" << std::endl;
}
