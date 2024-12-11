/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tashiget <tashiget@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 22:12:21 by tashiget          #+#    #+#             */
/*   Updated: 2024/12/11 22:12:21 by tashiget         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.h"

Dog::Dog() : Animal()
{
	type = "Dog";
	std::cout << type <<  ": Dog: constructor called." << std::endl;
}

Dog::Dog(const Dog& other) : Animal(other)
{
	type = "Dog";
	std::cout << type << ": Dog: copy constructor called." << std::endl;
}

Dog&	Dog::operator=(const Dog& other)
{
	if (this != &other)
	{
		Animal::operator=(other);
		type = "Dog";
	}
	std::cout << type << ": Dog: copy asignment called." << std::endl;
	return (*this);
}

Dog::~Dog()
{
	std::cout << type << ": Dog: destructor called." << std::endl;
}

void	Dog::makeSound() const
{
	std::cout << type << ": Dog: wan!" << std::endl;
}
