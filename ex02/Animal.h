/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tashiget <tashiget@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 22:07:33 by tashiget          #+#    #+#             */
/*   Updated: 2024/12/11 22:07:33 by tashiget         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_H
# define ANIMAL_H
# include <string>
# include <iostream>

class	Animal
{
protected:
	std::string	type;
public:
	Animal();
	Animal(const Animal& Animal);
	Animal&	operator=(const Animal& other);
	virtual	~Animal();
	virtual void	makeSound() const = 0;
	std::string	getType() const;
};

#endif
