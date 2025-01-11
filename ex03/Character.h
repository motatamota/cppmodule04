/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tashiget <tashiget@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 23:41:55 by tashiget          #+#    #+#             */
/*   Updated: 2025/01/11 19:08:48 by tashiget         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Character_H
# define Character_H
# include <string>
# include "ICharacter.h"

class	Character : public ICharacter
{
private:
	std::string name;
	AMateria *slot[4];

public:
	Character();
	Character(std::string arg);
	Character(const Character& Character);
	Character&	operator=(const Character& other);
	~Character();
	void equip(AMateria* m);
	void unequip(int idx);
	std::string const & getName() const;
	void use(int idx, ICharacter& target);
};

std::ostream	&operator<<(std::ostream &stream, const Character &tmp);

#endif
