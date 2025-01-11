/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Crue.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tashiget <tashiget@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 23:41:55 by tashiget          #+#    #+#             */
/*   Updated: 2024/12/11 23:41:55 by tashiget         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CRUE_H
# define CRUE_H
# include "AMateria.h"

class	Crue : public AMateria
{
public:
	Crue();
	Crue(const Crue& Crue);
	Crue&	operator=(const Crue& other);
	virtual	~Crue();
	Crue &clone();
	void use(ICharacter& target);
};

#endif
