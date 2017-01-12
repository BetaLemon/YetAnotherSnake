#pragma once

Snake::Snake(){
}

Snake::~Snake() {
}

int Snake::getSize() {
	return size;
}

void Snake::moveSnake(direction dir) {
	switch (dir) {
	case UP:
		pos.second - gridSize;
		break;
	case DOWN:
		pos.second + gridSize;
		break;
	case LEFT:
		pos.first - gridSize;
		break;
	case RIGHT:
		pos.first + gridSize;
	}
}

void Snake::changeDir(direction newDir) {
	dir = newDir;
}

void Snake::growSnake() {
	size++;
}

void Snake::checkCollision() {
	/*switch (dir) {
	case UP:
	}*/
}