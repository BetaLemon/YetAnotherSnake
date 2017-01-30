#pragma once
#include "Sprite.hh"
#include "InputManager.hh"
#include <ctime>
#include "SnakeGrid.hh"
#include "Window.hh"
#include "IOManager.hh"
#include "TimeManager.hh"¡

class SnakeGrid {
public:
	SnakeGrid(int gridWidth, int gridHeight) {};
	~SnakeGrid() {};
	void Update(int &score) {};
	void Draw() {};
private:
	//std::vector<std::vector<Tile>> Grid;
};