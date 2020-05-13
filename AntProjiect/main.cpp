#include<iostream>
#include<vector>
#include"UI.h"
#include"Ant.h"
#include"Utls.h"
#include"MapLoction.h"

static MapLocation mapLocation[400];


int main() {
	vector <Ant *> ant;
	initMapLocation(mapLocation);
	initAnt(ant);
	showMain(ant);
	addAntToMap(ant, mapLocation);
	return 0;
}