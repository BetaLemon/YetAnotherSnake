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
		pos.second--;
		break;
	case DOWN:
		pos.second++;
		break;
	case LEFT:
		pos.first--;
		break;
	case RIGHT:
		pos.first++;
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