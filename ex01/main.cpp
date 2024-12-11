/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tashiget <tashiget@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 22:32:17 by tashiget          #+#    #+#             */
/*   Updated: 2024/12/11 22:32:17 by tashiget         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.h"
#include "Cat.h"
#include <iostream>

int main() {
	// 単体テスト
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	delete j; // メモリリークが発生しないこと
	delete i;

	std::cout << "---------------------------------" << std::endl;
	// 配列でのテスト
	const Animal* animals[4];
	animals[0] = new Dog();
	animals[1] = new Cat();
	animals[2] = new Dog();
	animals[3] = new Cat();

	for (int i = 0; i < 4; i++) {
		delete animals[i]; // Animalとして削除しても適切なデストラクタが呼ばれる
	}
	std::cout << "---------------------------------" << std::endl;

	// コピーのテスト
	Dog originalDog;
	Dog copyDog = originalDog; // ディープコピーが行われること

	return 0;
}
