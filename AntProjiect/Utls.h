#pragma once
#include<time.h>
#include<vector>
#include"Ant.h"
#include"MapLoction.h"

using namespace std;
bool leftMove(Ant ant) {

	if (ant.x - 20 >= 203) {
		return true;
	}
	else
		return false;
}

bool rughtMove(Ant ant) {
	if (ant.x + 20 <= 600) {
		return true;
	}
	else
		return false;
}

bool upMove(Ant ant) {
	if (ant.y - 20 >= 99) {
		return true;
	}
	else
		return false;
}
bool downMove(Ant ant) {
	if (ant.y + 20 <= 400) {
		return true;
	}
	else
		return false;
}

void initAnt(vector<Ant *> &ant) {
	srand((unsigned)time(NULL));
	for (int i = 0; i < 100; i++) {
		Ant* ant_ = new Ant();
		int x = 202, y = 99;
		ant_->timeStep = 0;

		x = (rand() % 20) * 20 + x;

		ant_->x = x;

		y = (rand() % 20) * 20 + y;
		ant_->y = y;
		ant.push_back(ant_);

	}
}
MapLocation findMap(Ant ant, MapLocation maplocation[]) {
	MapLocation map;
	for (int i = 0; i < 400; i++) {
		if()
	}
}
void initMapLocation(MapLocation mapLocation[]) {
	int x = 202, y = 99,index = 0;
	for (int i = 0; i < 20; i++) {
		for (int j = 0; j < 20; j++) {
			mapLocation[index].isExist = 0;
			mapLocation[index].x = x;
			mapLocation[index].y = y;
			index++;
			x = x + 20;
		}
		y = y + 20;
		x = 202;
	}
}

void addAntToMap(vector<Ant*>ant, MapLocation mapLocation[]) {
	for (int i = 0; i < ant.size(); i++) {
		for (int j = 0; j < 400; j++) {
			if (ant[i]->x == mapLocation[j].x && ant[i]->y == mapLocation[j].y) {
				mapLocation[j].isExist = 1;
			}
		}
	}
}
void isMove(vector<Ant*>ant, MapLocation maplocation[]) {
	for (int i = 0; i < 400; i++) {
		for (int j = 0; j < ant.size(); j++) {
			if (leftMove(*ant[j]) && maplocation[j].isExist == 0) {

			}
		}
	 }
}




int randLocation() {
	srand((unsigned)time(NULL));

}
