/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tashiget <tashiget@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 23:42:11 by tashiget          #+#    #+#             */
/*   Updated: 2024/12/11 23:42:11 by tashiget         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.h"

Ice::Ice() : AMateria("ice")
{
}

Ice::Ice(const Ice& Ice) : AMateria(Ice.getType())
{
	(void)Ice;
}

Ice&	Ice::operator=(const Ice& other)
{
	(void)other;
	return (*this);
}

Ice::~Ice()
{
}

AMateria* Ice::clone() const
{
	Ice	*tmp = new Ice();

	return (tmp);
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target << " *" << std::endl;
}
