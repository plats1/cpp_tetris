/*
 * TetrominoJ.hpp
 *
 *  Created on: 28.04.2014
 *      Author: nicola
 */

#ifndef TETROMINOJ_HPP_
#define TETROMINOJ_HPP_

#include "Libraries.hpp"
#include "Tetromino9.hpp"

class TetrominoJ: public Tetromino9 {
private:
	static const ColorType color;

public:
	TetrominoJ()
	:Tetromino9(color, typeTetrominoJ) {};
	tetrominoType getType() {return typeTetrominoJ;};
};

#endif /* TETROMINOJ_HPP_ */
