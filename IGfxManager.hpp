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
#include <map>
#include <unordered_map>
#include <memory>
#include "arcade.hpp"
#include "AEntity.hpp"

namespace arcade {
	class IGfxManager {
	public:
		virtual ~IGfxManager() = default;
		enum class Keys {
			Unknown = -1,
			A = 0,
			B,
			C,
			D,
			E,
			F,
			G,
			H,
			I,
			J,
			K,
			L,
			M,
			N,
			O,
			P,
			Q,
			R,
			S,
			T,
			U,
			V,
			W,
			X,
			Y,
			Z,
			Num0,
			Num1,
			Num2,
			Num3,
			Num4,
			Num5,
			Num6,
			Num7,
			Num8,
			Num9,
			Escape,
			LControl,
			LShift,
			LAlt,
			LSystem,
			RControl,
			RShift,
			RAlt,
			RSystem,
			Menu,
			LBracket,
			RBracket,
			SemiColon,
			Comma,
			Period,
			Quote,
			Slash,
			BackSlash,
			Tilde,
			Equal,
			Dash,
			Space,
			Return,
			BackSpace,
			Tab,
			PageUp,
			PageDown,
			End,
			Home,
			Insert,
			Delete,
			Add,
			Subtract,
			Multiply,
			Divide,
			Left,
			Right,
			Up,
			Down,
			Numpad0,
			Numpad1,
			Numpad2,
			Numpad3,
			Numpad4,
			Numpad5,
			Numpad6,
			Numpad7,
			Numpad8,
			Numpad9,
			F1,
			F2,
			F3,
			F4,
			F5,
			F6,
			F7,
			F8,
			F9,
			F10,
			F11,
			F12,
			F13,
			F14,
			F15,
			Pause,
			KeyCount
		};
		virtual void initWindow(arcade::Point <std::size_t> size, std::string name) = 0;
		/*
		** formatage -> gfxName\n\n\ngameName\n\n\nPlayerName
		*/
		virtual std::string showMenu(std::vector<std::string> &gfxName, std::vector<std::string> &gameName) = 0;
		virtual std::string getPlayerName() = 0;
		virtual void setTraductor(const std::unordered_map<unsigned char, Traductor> &map) = 0;
		virtual void drawEntities(const std::vector<AEntity *> &sprite) = 0;
		virtual void drawMap(const std::vector<std::vector<unsigned char>> &map) = 0;
		virtual arcade::IGfxManager::Keys getEvent() = 0;
	};
}

/*
** std::string getName();
** arcade::IGfxManager *entryPoint();
*/

#endif //CPP_ARCADE_IGFXMANAGER_HPP
