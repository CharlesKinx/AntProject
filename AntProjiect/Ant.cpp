#include"Ant.h"
#include<vector>
using namespace std;
Ant::Ant() {

}

void Ant::antBreed(vector<Ant *> ant) {
	for (int i = 0; i < ant.size(); i++) {
		if (ant[i]->timeStep == 3) {
			Ant *ant_ = new Ant();
			ant[i]->timeStep = 0;
			ant.push_back(ant_);
		}
	}

}
void Ant::antDead() {

}
void Ant::antMove() {

}