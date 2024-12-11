/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tashiget <tashiget@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 23:02:48 by tashiget          #+#    #+#             */
/*   Updated: 2024/12/11 23:02:48 by tashiget         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_H
# define BRAIN_H
# include <iostream>

class	Brain
{
private:
	std::string ideas[100];

public:
	Brain();
	Brain(const Brain& other);
	Brain&	operator=(const Brain& other);
	virtual	~Brain();
};

#endif
