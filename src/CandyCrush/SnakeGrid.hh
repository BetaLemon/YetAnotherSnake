#pragma once
#include "Sprite.hh"
#include "InputManager.hh"
#include <ctime>
#include "SnakeGrid.hh"
#include "Window.hh"
#include "IOManager.hh"
#include "TimeManager.hh"

typedef enum TileType {
	EMPTY, SNAKE_BODY, SNAKE_HEAD, SNAKE_BUTT, FOOD
};

class Tile {
	int x;
	int y;
	TileType type;
	Sprite sprite;
	Tile() {
		switch(type){
		case EMPTY:
			break;
		case SNAKE_BODY:
			sprite = 
		}
	}
};

class SnakeGrid {
public:
	SnakeGrid(int gridWidth, int gridHeight);
	~SnakeGrid();
	void Update(int &score);
	void Draw();
private:
	std::vector<std::vector<Tile>> Grid;
};