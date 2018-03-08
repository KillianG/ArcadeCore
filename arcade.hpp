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
	struct IPoint {
		std::size_t x;
		std::size_t y;
	};

	struct FPoint {
		float x;
		float y;
	};

	struct Color {
		unsigned char r;
		unsigned char g;
		unsigned char b;
		unsigned char a;
	};

	struct Traductor {
		enum class Types {
			SQUARE, LINE, CIRCLE, TRIANGLE, SPRITE,
		};
		arcade::Traductor::Types type;
		std::string spritePath;
		std::string asciiSprite;
		arcade::Color couleur;
		arcade::IPoint size;
	};
}
;

#endif
