#ifndef SHIP_H
#define SHIP_H

#include <iostream>
#include <stdio.h>
#include <string>
#include <string.h>
#include <list>


using namespace std;

class Ship
{
private:
	string car;
	int life;
	list<char> caracterList;

public:
	Ship();
	void shoot();
};

#endif // SHIP_H