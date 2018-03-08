/*
** EPITECH PROJECT, 2018
** Epitech scolarship project (4 years remaining)
** File description:
**      Made on 2018/03 by ebernard
*/

#ifndef CPP_ARCADE_IGFXMANAGER_HPP
#define CPP_ARCADE_IGFXMANAGER_HPP

#include <string>
#include <vector>
#include "arcade.hpp"
#include "AEentity.hpp"

namespace arcade {
	class IGfxManager{
	public:
		enum class Keys {
			UP,
			DOWN,
			LEFT,
			RIGHT
		};
		virtual void initWindow(arcade::IPoint &) = 0;
		virtual void draw(std::vector<AEntity> &) = 0;
		virtual arcade::IGfxManager::Keys getEvent() const = 0;
	};
};

#endif //CPP_ARCADE_IGFXMANAGER_HPP
