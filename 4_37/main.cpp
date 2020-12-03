#include "bike.h"

int main() {

	Bike b1(2, 5, 200, "Fuji", 465, "Fuji Absolute 2.1", 18, "City"); 

	Bike b2(5, 6.5, 320, "Cannondale", 840, "Cannondale Quick CX 3", 24, "Hybrid");

	Bike b3(4, 7, 210, "State", 449, "State Rutherford", 18, "Commuter");

	b1.OutBike();
	b2.OutBike();
	b3.OutBike();

	system("pause");
	return 0;
}