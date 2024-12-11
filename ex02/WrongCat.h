/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tashiget <tashiget@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 22:11:06 by tashiget          #+#    #+#             */
/*   Updated: 2024/12/11 22:11:06 by tashiget         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WrongCat_H
# define WrongCat_H
# include "WrongAnimal.h"

class	WrongCat : public WrongAnimal
{
public:
	WrongCat();
	WrongCat(const WrongCat& WrongCat);
	WrongCat&	operator=(const WrongCat& other);
	virtual	~WrongCat();
	void	makeSound() const;
};

#endif
