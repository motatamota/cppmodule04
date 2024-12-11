/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tashiget <tashiget@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 22:07:33 by tashiget          #+#    #+#             */
/*   Updated: 2024/12/11 22:07:33 by tashiget         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WrongAnimal_H
# define WrongAnimal_H
# include <string>
# include <iostream>

class	WrongAnimal
{
protected:
	std::string	type;
public:
	WrongAnimal();
	WrongAnimal(const WrongAnimal& WrongAnimal);
	WrongAnimal&	operator=(const WrongAnimal& other);
	virtual	~WrongAnimal();
	void	makeSound() const;
	std::string	getType() const;
};

#endif
