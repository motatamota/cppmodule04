/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tashiget <tashiget@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 22:07:23 by tashiget          #+#    #+#             */
/*   Updated: 2024/12/11 22:07:23 by tashiget         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Animal.h"

Animal::Animal() : type("default")
{
	std::cout << type <<  ": Animal: constructor called." << std::endl;
}

Animal::Animal(const Animal& Animal) : type(Animal.type)
{
	std::cout << type << ": Animal: copy constructor called." << std::endl;
}

Animal&	Animal::operator=(const Animal& other)
{
	if (this != &other)
	{
		type = other.type;
	}
	std::cout << type << ": Animal: copy asignment called." << std::endl;
	return (*this);
}

Animal::~Animal()
{
	std::cout << type << ": Animal: destructor called." << std::endl;
}

void	Animal::makeSound() const
{
	std::cout << type << ": Animal: ***!" << std::endl;
}

std::string	Animal::getType() const
{
	return (type);
}
