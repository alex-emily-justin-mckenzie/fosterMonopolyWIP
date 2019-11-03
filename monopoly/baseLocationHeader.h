#pragma once
#include "basePlayerHeader.h"
#include <string>
#include <iostream>
#include <ctime>
using namespace std;

class property {

private:
	string tileName;
	string tileLocation;
	int numLocation;
	int basePrice;
	int numHotels;
	int baseRent;
	int houseCost;
	bool propertyOwned;
	string ownerName;

public:
	property()
	{
		propertyOwned = false, ownerName = " ", basePrice = 0, numHotels = 0,
			baseRent = 0, houseCost = 0;
	};
	string getTileName() { return tileName; }
	string getLocationName() { return tileLocation; }
	int getBasePrice() { return basePrice; }
	int getHotels() { return numHotels; }
	int getRent() { return baseRent; }
	int getHouseCost() { return houseCost; }
	string getOwnerName() { return ownerName; }
	bool getIfOwned() {return propertyOwned;}



};
