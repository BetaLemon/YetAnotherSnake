#include "Snake.hh"
#include <iostream>
#include <vector>

typedef enum direction {
	UP, DOWN, LEFT, RIGHT
};

class Snake {
public:
	Snake::Snake();
	Snake::~Snake();
	void Snake::moveSnake(direction);
	void Snake::changeDir(direction);
	int Snake::getSize();
	void Snake::checkCollision();
	void Snake::growSnake();
private:
	int size;
	std::vector<std::pair<int, int>> pos;
	direction dir;
	int gridSize;
};