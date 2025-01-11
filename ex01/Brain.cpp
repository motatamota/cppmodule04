/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tashiget <tashiget@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 23:03:13 by tashiget          #+#    #+#             */
/*   Updated: 2024/12/11 23:03:13 by tashiget         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.h"

Brain::Brain()
{
	std::cout << "Brain: constructor called." << std::endl;
}

Brain::Brain(const Brain& other)
{
	for(int n = 0; n < 100; n++)
		this->ideas[n] = other.ideas[n];
	std::cout << "Brain: copy constructor called." << std::endl;
}

Brain&	Brain::operator=(const Brain& other)
{
	if (this != &other)
	{
		for(int n = 0; n < 100; n++)
			this->ideas[n] = other.ideas[n];
	}
	std::cout << "Brain: copy asignment called." << std::endl;
	return (*this);
}

Brain::~Brain()
{
	std::cout << "Brain: destructor called." << std::endl;
}
