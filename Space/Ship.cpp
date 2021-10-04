#include "Ship.h"

Ship::Ship() {
	this->car = "new ship";
	this->life = 3;
	this->caracterList.push_back(1);
}

void Ship::shoot(){
	cout << "Shoot\n";

}
