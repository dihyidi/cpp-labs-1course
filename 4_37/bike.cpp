#include "bike.h"

Bike::Bike(int thatTransmission, double thatBike_mass, int thatMax_mass, std::string thatManufacturer, int thatPrice, std::string thatModel_name, int thatWarranty, std::string thatType) {
	transmission = thatTransmission;
	bike_mass = thatBike_mass;
	max_mass = thatMax_mass;
	manufacturer = thatManufacturer;
	price = thatPrice;
	model_name = thatModel_name;
	warranty = thatWarranty;
	type = thatType;
}

Bike::Bike() {
	transmission = 0;
	bike_mass = 0;
	max_mass = 0;
	manufacturer = "n/a";
	price = 0;
	model_name = "n/a";
	warranty = 0;
	type = "n/a";
}

Bike::~Bike() { }

void Bike::OutBike() {
	std::cout << "transmission: " << transmission << std::endl;
	std::cout << "bike mass, kg: " << bike_mass << std::endl;
	std::cout << "max mass, kg: " << max_mass << std::endl;
	std::cout << "manufacturer: " << manufacturer << std::endl;
	std::cout << "price, $: " << price << std::endl;
	std::cout << "model name: " << model_name << std::endl;
	std::cout << "warranty, months" << warranty << std::endl;
	std::cout << "type: " << type << std::endl << std::endl;
}

