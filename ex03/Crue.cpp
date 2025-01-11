/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Crue.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tashiget <tashiget@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 23:41:44 by tashiget          #+#    #+#             */
/*   Updated: 2024/12/11 23:41:44 by tashiget         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Crue.h"

Crue::Crue() : AMateria("cure")
{
}

Crue::Crue(const Crue& Crue) : AMateria(Crue.getType())
{
	(void)Crue;
}

Crue&	Crue::operator=(const Crue& other)
{
	(void)other;
	return (*this);
}

Crue::~Crue()
{
}

AMateria* Crue::clone() const
{
	Crue	*tmp = new Crue;
	return (tmp);
}

void Crue::use(ICharacter& target)
{
	std::cout << "* heals " << target << "'s wounds *" << std::endl;
}
