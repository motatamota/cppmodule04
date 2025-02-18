/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tashiget <tashiget@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 23:41:27 by tashiget          #+#    #+#             */
/*   Updated: 2024/12/11 23:41:27 by tashiget         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_H
# define AMATERIA_H
# include <iostream>
# include <string>
# include "ICharacter.h"

class	ICharacter;

class	AMateria
{
protected:
	std::string type;
public:
	AMateria();
	AMateria(const AMateria &dst);
	AMateria(std::string const & type);
	AMateria &operator=(const AMateria &dst);
	virtual ~AMateria();
	std::string const & getType() const;
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);
};

#endif
