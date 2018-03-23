/*
** EPITECH PROJECT, 2018
** Epitech scolarship project (4 years remaining)
** File description:
**      Made on 2018/03 by ebernard
*/

#ifndef CPP_ARCADE_IGAMEMANAGER_HPP
# define CPP_ARCADE_IGAMEMANAGER_HPP

#include <cstddef>
#include <map>
#include <memory>
#include <string>
#include <utility>
#include <vector>
#include <unordered_map>

#include "arcade.hpp"
#include "IGfxManager.hpp"

namespace arcade {
	class IGameManager {
	public:
		virtual ~IGameManager() = default;
		virtual std::vector<std::pair<std::string, std::size_t>> getScoreBoard() = 0;
		virtual arcade::Point <std::size_t>initGame() = 0;
		virtual int run(arcade::IGfxManager::Keys) = 0;
		virtual const std::vector<arcade::AEntity *> &getEntities() = 0;
		virtual const std::vector<std::vector<unsigned char>> &getMap() const = 0;
		virtual const std::unordered_map<unsigned char, Traductor> &getTraductor() const = 0;
		virtual void setPlayerName(std::string &name) = 0;
	};
}
/*
** std::string getName();
** arcade::IGameManager *entryPoint();
*/



#endif //CPP_ARCADE_IGAMEMANAGER_HPP
