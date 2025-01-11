/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tashiget <tashiget@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/11 18:15:16 by tashiget          #+#    #+#             */
/*   Updated: 2025/01/11 19:12:30 by tashiget         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.h"

MateriaSource::MateriaSource()
{
	for (int k = 0; k < 4; k++)
		slot[k] = 0;
}

MateriaSource::MateriaSource(const MateriaSource& other)
{
	for (int k = 0; k < 4; k++)
		slot[k] = other.slot[k];
}

MateriaSource&	MateriaSource::operator=(const MateriaSource& other)
{
	if (this == &other)
		return (*this);
	for (int k = 0; k < 4; k++)
		slot[k] = other.slot[k];
	return (*this);
}

MateriaSource::~MateriaSource()
{
}

void MateriaSource::learnMateria(AMateria* tmp)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (!slot[i])
		{
			slot[i] = tmp;
			return ;
		}
		i++;
	}
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (slot[i] && slot[i]->getType() == type)
			return(slot[i]->clone());
		i++;
	}
	return (0);
}