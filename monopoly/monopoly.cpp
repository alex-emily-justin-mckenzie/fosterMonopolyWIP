#include "baseLocationHeader.h"
#include "basePlayerHeader.h"
#include <string>
#include <iostream>
#include <ctime>
#include <vector>
#include <fstream>
using namespace std;
/*
Monopoly Rules:


*/
int main()
{
	//just psuedocode(kinda) of filling in a vector of our properties
	vector<property> testProperty;
	ifstream propertyRead("fileWithPropertyValues");
	if (propertyRead.is_open())
	{
		while (!propertyRead.eof())
		{
			for (int i = 0; i < 42; i++)
			{
				string tempLocation;
				int tempBasePrice;
				int tempRent;
				int tempHouseCost;

				propertyRead >> tempLocation >> tempBasePrice >> tempRent >> tempHouseCost;

				testProperty.at(i).setLocationName(tempLocation);
				testProperty.at(i).setBasePrice(tempBasePrice);
				testProperty.at(i).setRent(tempRent);
				testProperty.at(i).setHouseCost(tempHouseCost);

				testProperty.push_back(property());
			}
		}
	}

return 0;
}

