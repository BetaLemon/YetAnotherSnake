#pragma once
#include "Snake.hh"
#include <iostream>
#include <vector>
#include "Sprite.hh"

class SnakeScene {
private:
	int width, height;
	Snake snake;
	Food food;
public:
	SnakeScene();
	~SnakeScene();
	void Update();
};

SnakeScene::SnakeScene() {
	width = 600;
	height = 600;
}

SnakeScene::~SnakeScene() {
}

void SnakeScene::Update() {
	snake.update();
}