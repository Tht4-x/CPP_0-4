/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dancel <dancel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 21:25:58 by dancel            #+#    #+#             */
/*   Updated: 2025/04/15 02:34:55 by dancel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	{
		Animal a; // Dois crash car classe abstraite !
		a.makeSound();
		Cat c;
		c.makeSound();
	}
// {	
// 	Animal*	zoo[10];
// 	for (int i = 0; i < 5; i++)
// 		zoo[i] = new Cat;
// 	std::cout << std::endl;
// 	for (int i = 5; i < 10; i++)
// 		zoo[i] = new Dog;
// 	std::cout << std::endl;
// 	for (int i = 0; i < 10; i++)
// 		delete zoo[i];
// }
// {
// 	std::cout << std::endl;
// 	const Animal* meta = new Animal();
// 	const Animal* j = new Dog();
// 	const Animal* i = new Cat();
// 	const Dog d;
// 	Animal h("horse");
// 	Animal copy(h);
// 	copy = h;
// 	i->makeSound();
// 	j->makeSound();
// 	meta->makeSound();
// 	delete meta;
// 	delete i;
// 	delete j;
// }
// {
// 	std::cout << std::endl;
// 	const WrongAnimal* meta = new WrongAnimal();
// 	const WrongAnimal* i = new WrongCat();
// 	WrongAnimal h("horse");
// 	WrongAnimal copy(h);
// 	copy = h;
// 	i->makeSound();
// 	meta->makeSound();
// 	delete meta;
// 	delete i;
// }
}
