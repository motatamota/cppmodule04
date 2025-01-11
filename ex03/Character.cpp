/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tashiget <tashiget@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/11 16:21:46 by tashiget          #+#    #+#             */
/*   Updated: 2025/01/11 18:09:02 by tashiget         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.h"

Character::Character() : name("no name")
{
	for (int k = 0; k < 4; k++)
		slot[k] = 0;
}

Character::Character(std::string arg) : name(arg)
{
	for (int k = 0; k < 4; k++)
		slot[k] = 0;
}

Character::Character(const Character& other) : name(other.name)
{
	for (int k = 0; k < 4; k++)
		slot[k] = other.slot[k];
}

Character&	Character::operator=(const Character& other)
{
	if (this == &other)
		return (*this);
	name = other.name;
	return (*this);
}

Character::~Character() {}

void Character::equip(AMateria* m)
{
	AMateria *tmp;
	tmp = m;
	int i = 0;
	while (i < 4)
	{
		if (!slot[i])
		{
			slot[i] = m;
			return ;
		}
		i++;
	}
	std::cout << "cant equip" << std::endl;
}

void Character::unequip(int idx)
{
	if (idx < 0 || idx >= 4)
	{
		std::cout << "error: idx" << std::endl;
		return ;
	}
	slot[idx] = 0;
}

void Character::use(int idx, ICharacter& target)
{
	if (idx < 0 || idx >= 4)
	{
		std::cout << "error: idx" << std::endl;
		return ;
	}
	if (!slot[idx])
	{
		std::cout << "no material" << std::endl;
		return ;
	}
	slot[idx]->use(target);
	slot[idx] = 0;
}

std::string const & Character::getName() const
{
	return (name);
}

std::ostream	&operator<<(std::ostream &stream, const Character &tmp)
{
	stream << tmp.getName();
	return (stream);
}
