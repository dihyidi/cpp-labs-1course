#ifndef BIKE_H
#define BIKE_H

#include<string>
#include <iostream>

class Bike {
private:
	int transmission;
	double bike_mass;
	int max_mass;
	std::string manufacturer;

protected:
	int price;
	std::string model_name;

public:
	int warranty;
	std::string type;

	Bike();
	~Bike();
	Bike(int thatTransmission, double thatBike_mass, int thatMax_mass, std::string thatManufacturer, 
		int thatPrice, std::string thatModel_name, int thatWarranty, std::string thatType);

	void OutBike() ;

	int getTransmission() { return transmission; }
	double getBike_mass() { return bike_mass; }
	int getMax_mass() { return max_mass; }
	std::string getManufacturer() { return manufacturer; }
};

#endif // !BIKE_H