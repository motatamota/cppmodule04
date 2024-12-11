/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tashiget <tashiget@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 22:12:01 by tashiget          #+#    #+#             */
/*   Updated: 2024/12/11 22:12:01 by tashiget         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
# define DOG_H
# include "Animal.h"

class	Dog : public Animal
{
public:
	Dog();
	Dog(const Dog& Dog);
	Dog&	operator=(const Dog& other);
	virtual	~Dog();
	void	makeSound() const;
};

#endif
