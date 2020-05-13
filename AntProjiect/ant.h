#pragma once
#ifndef _ANT_H_
#include"Organism.h"
#include<vector>
using namespace std;
class Ant : public Organism {
public:

	int x;
	int y;
	int timeStep;

	Ant();
	void antMove();
	void antDead();
	void antBreed(vector<Ant*> ant);
};
#endif // !_ANT_H_
