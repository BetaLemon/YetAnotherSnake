#pragma once
#include <vector>

struct Coord {
	int x, y;
};

class Food {
private:
	std::vector<Coord> food;
	int foodAmount;
public:
	Coord getFoodCoord(int i);
	int getAmount();
};

Coord Food::getFoodCoord(int i) {
	return food[i];
}

int Food::getAmount() {
	return foodAmount;
}