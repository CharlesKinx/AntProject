#pragma once
#ifndef _ORGANISM_H_
class Organism {
	int x;
	int y;
	int timeStep;

	virtual void antMove();
	virtual void antBreed();
	virtual void antDead();
};

#endif  !_ORGANISM_H_

