#pragma once
#include <iostream>
#include <vector>
#include "Sprite.hh"
#include <stdlib.h>
#include "Food.hh"

typedef enum direction {
	UP, DOWN, LEFT, RIGHT
};

struct Coord {
	int x, y;
};

class Snake {
public:
	Snake();
	~Snake();
	void moveSnake();
	//void Snake::changeDir();
	int getLength();
	bool checkCollision();
	bool checkFood(Food food);
	void changeDirection(direction direc);
	void growSnake();
	void update();
	void draw();
private:
	int length;
	std::vector<Coord> pos;
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
			pos[i].y - tileSize;
			break;
		case DOWN:
			pos[i].y + tileSize;
			break;
		case LEFT:
			pos[i].x - tileSize;
			break;
		case RIGHT:
			pos[i].x + tileSize;
		}
	}
}

void Snake::changeDirection(direction direc) {
	dir[0] = direc;
}

void Snake::growSnake() {
	length++;
	pos.push_back(pos[pos.size() - 1]);
}

bool Snake::checkCollision() {
	bool collision = false;
	for (int i = 1; i < pos.size(); i++) {
		if (pos[0].x == pos[i].x && pos[0].y == pos[i].y) {
			collision = true;
		}
	}
	return collision;
}

bool Snake::checkFood(Food food) {
	bool isFood = false;
	for (int i = 0; i < food.getAmount(); i++) {
		if (food.getFoodCoord(i).x == pos[0].x && food.getFoodCoord(i).y == pos[0].y) {
			isFood = true;
		}
	}
	return isFood;
}

void Snake::update() {
	moveSnake();
	if (checkCollision) {
		std::cout << "Snake Dead." << std::endl;
	}
	if (checkFood) {
		std::cout << "Food eaten." << std::endl;
		growSnake();
	}
}

void Snake::draw() {

}