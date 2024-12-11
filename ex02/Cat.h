/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tashiget <tashiget@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 22:11:06 by tashiget          #+#    #+#             */
/*   Updated: 2024/12/11 22:11:06 by tashiget         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
# define CAT_H
# include "Animal.h"
# include "Brain.h"

class	Cat : public Animal
{
private:
	class Brain	*Brain;
public:
	Cat();
	Cat(const Cat& Cat);
	Cat&	operator=(const Cat& other);
	virtual	~Cat();
	void	makeSound() const;
};

#endif
