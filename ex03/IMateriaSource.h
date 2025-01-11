/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tashiget <tashiget@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 23:42:37 by tashiget          #+#    #+#             */
/*   Updated: 2025/01/11 15:57:36 by tashiget         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIASOURCE_H
# define IMATERIASOURCE_H
# include <string>
# include "AMateria.h"

class	IMateriaSource
{
public:
	virtual ~IMateriaSource() {}
	virtual std::string const & getName() const = 0;
	virtual AMateria* createMateria(std::string const & type) = 0;
};

#endif
