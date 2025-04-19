/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dancel <dancel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 14:39:55 by dancel            #+#    #+#             */
/*   Updated: 2025/04/07 16:31:47 by dancel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>
#include <cmath>

class Fixed
{
	private:
		int 				_value;
		static const int 	_nbit = 8;
		
	public:
		Fixed();
		Fixed(const int n);
		Fixed(const float f);
		Fixed(const Fixed &other);
		Fixed &operator=(const Fixed &other);
		~Fixed();
		
		int 	getRawBits() const;
		void	setRawBits(int const raw);
		float	toFloat() const;
		int		toInt() const;
};

std::ostream	&operator<<(std::ostream &s, Fixed const &value);

/*
Un constructeur prenant un entier constant en paramètre et qui convertit celui-
ci en virgule fixe. Le nombre de bits de la partie fractionnaire est initialisé à 8
comme dans l’exercice 00.
•Un constructeur prenant un flottant constant en paramètre et qui convertit
celui-ci en virgule fixe. Le nombre de bits de la partie fractionnaire est initialisé à
8 comme dans l’exercice 00.
•Une fonction membre float toFloat( void ) const;
qui convertit la valeur en virgule fixe en nombre à virgule flottante.
•Une fonction membre int toInt( void ) const;
qui convertit la valeur en virgule fixe en nombre entier.
Ajoutez également la fonction suivante à vos fichiers de la classe Fixed :
•Une surcharge de l’opérateur d’insertion («) qui insère une représentation en vir-
gule flottante du nombre à virgule fixe dans le flux de sortie (objet output stream)
passé en paramètre*/