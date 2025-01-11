/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tashiget <tashiget@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 23:41:55 by tashiget          #+#    #+#             */
/*   Updated: 2025/01/11 19:09:08 by tashiget         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MateriaSource_H
# define MateriaSource_H
# include "IMateriaSource.h"

class	MateriaSource : public IMateriaSource
{
private:
	AMateria *slot[4];

public:
	MateriaSource();
	MateriaSource(const MateriaSource& MateriaSource);
	MateriaSource&	operator=(const MateriaSource& other);
	~MateriaSource();

	void learnMateria(AMateria* tmp);
	AMateria* createMateria(std::string const & type);
};

#endif
