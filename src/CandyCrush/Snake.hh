#pragma once
#include <iostream>
#include <vector>
#include "Sprite.hh"
#include <stdlib.h>

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

Snake::Snake() {
	tileSize = 14;
	for (int i = 0; i < 3; i++) {
		pos.push_back({ 100,100 + (i * 14) });
		dir.push_back(UP);
	}
}

Snake::~Snake() {
}

int Snake::getLength() {
	return length;
}

void Snake::moveSnake() {
	for (int i = 0; i < dir.size; i++) {
		if ((i != 0) && (dir[i] != dir[i - 1])) {
			dir[i] == dir[i - 1];
		}
		switch (dir[i]) {
		case UP:
			pos[i].second - tileSize;
			break;
		case DOWN:
			pos[i].second + tileSize;
			break;
		case LEFT:
			pos[i].first - tileSize;
			break;
		case RIGHT:
			pos[i].first + tileSize;
		}
	}
}

void Snake::growSnake() {
	length++;
}

void Snake::checkCollision() {
	/*switch (dir) {
	case UP:
	}*/
}

void Snake::update() {

}

void Snake::draw() {

}