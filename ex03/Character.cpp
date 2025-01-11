/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tashiget <tashiget@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/11 16:21:46 by tashiget          #+#    #+#             */
/*   Updated: 2025/01/11 16:38:32 by tashiget         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.h"

Character::Character() : name("no name")
{
	for (int k = 0; k < 4; k++)
		slot[k] = nullptr;
}

Character::Character(std::string arg) : name(arg)
{
	for (int k = 0; k < 4; k++)
		slot[k] = nullptr;
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
		
}

Character::~Character() {}

void Character::equip(AMateria* m)
{
	AMateria *tmp;
	tmp = m;
	slot[]
}

void Character::unequip(int idx)
{

}

void Character::use(int idx, ICharacter& target)
{
	
}