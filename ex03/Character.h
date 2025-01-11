/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tashiget <tashiget@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 23:41:55 by tashiget          #+#    #+#             */
/*   Updated: 2025/01/11 16:21:32 by tashiget         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Character_H
# define Character_H
# include "AMateria.h"

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
	void use(int idx, ICharacter& target);
};

#endif
