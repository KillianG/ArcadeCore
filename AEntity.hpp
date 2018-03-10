/*
 ** EPITECH PROJECT, 2018
 ** Epitech scolarship project (4 years remaining)
 ** File description:
 **      Made on 2018/03 by ebernard
 */

#ifndef CPP_ARCADE_AEENTITY_HPP
#define CPP_ARCADE_AEENTITY_HPP

#include "arcade.hpp"

namespace arcade {
	class AEntity {
	protected:
		arcade::Point <float>pos;
		float angle;
		int key_traductor;
	};
}

#endif //CPP_ARCADE_AEENTITY_HPP
