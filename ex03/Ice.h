/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tashiget <tashiget@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 23:42:21 by tashiget          #+#    #+#             */
/*   Updated: 2024/12/11 23:42:21 by tashiget         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_H
# define ICE_H
# include "AMateria.h"

class	Ice : public AMateria
{
public:
	Ice();
	Ice(const Ice& Ice);
	Ice&	operator=(const Ice& other);
	virtual	~Ice();
	Ice &clone();
	void use(ICharacter& target);
};

#endif
