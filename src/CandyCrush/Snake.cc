#include "Snake.hh"
#include <iostream>
#include <vector>
#include "Sprite.hh"

typedef enum direction {
	UP, DOWN, LEFT, RIGHT
};

class Snake {
public:
	Snake::Snake();
	Snake::~Snake();
	void Snake::moveSnake();
	//void Snake::changeDir();
	int Snake::getLength();
	void Snake::checkCollision();
	void Snake::growSnake();
	void Snake::update();
	void Snake::draw();
private:
	int length;
	std::vector<std::pair<int, int>> pos;
	std::vector<direction> dir;
	int tileSize;
	Sprite snakeSprite;
};