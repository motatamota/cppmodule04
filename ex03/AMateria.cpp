/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tashiget <tashiget@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 23:41:14 by tashiget          #+#    #+#             */
/*   Updated: 2024/12/11 23:41:14 by tashiget         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.h"

AMateria::AMateria() : type("default")
{
}

AMateria::AMateria(const AMateria &dst) : type(dst.type)
{
}

AMateria::AMateria(std::string const & type) : type(type)
{
}

AMateria &AMateria::operator=(const AMateria &dst)
{
	if (this == &dst)
		return (*this);
	type = dst.type;
	return (*this);
}

AMateria::~AMateria()
{
}

std::string const & AMateria::getType() const
{
	return (type);
}

void AMateria::use(ICharacter& target)
{
	(void)target;
}