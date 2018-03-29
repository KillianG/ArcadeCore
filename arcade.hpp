/*
** EPITECH PROJECT, 2018
**
** File description:
** description
*/

#ifndef ARCADE_HPP
# define ARCADE_HPP

#include <string>
#include <vector>

namespace arcade {
	template <typename T>
	struct Point {
		T x;
		T y;
	};

	struct Color {
		unsigned char r;
		unsigned char g;
		unsigned char b;
		unsigned char a;
	};

	struct menuInfo {
		std::string playerName;
		std::string gfxName;
		std::string gameName;
	};

	struct Traductor {
		std::string text;
		std::string spritePath;
		unsigned char asciiChar;
		arcade::Color color;
	};
}

#endif
