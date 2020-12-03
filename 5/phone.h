#ifndef PHONE_H
#define PHONE_H

#include <iostream>
#include <string>

using namespace std;

class Smartphone {

protected:
	string m_model;
	int m_price, m_memory, m_amount;
	int* m_numbers;

public:
	Smartphone();
	~Smartphone();
	Smartphone(string model, int price, int memory, int amount);

	string getModel() { return m_model; }
	int getPrice() { return m_price; }
	int getMemory() { return m_memory; }
	int getAmount() { return m_amount; }
	int getNumber(int index) { return m_numbers[index]; }

	void setModel(std::string model) { m_model = model; }
	void setPrice(int price) { m_price = price; };
	void setMemory(int memory) { m_memory = memory; }
	void setAmount(int amount) { m_amount = amount; }
	void setNumber(int index, int number) { m_numbers[index] = number; }


	void SmartphoneOutput();

};

class PhoneStore {
	Smartphone* Store;
	int m_many;

public:
	PhoneStore();
	~PhoneStore();
	PhoneStore(int many);

	Smartphone getStore(int index) { return Store[index]; }
	void setPhone(int index, Smartphone* s) { Store[index] = *s; }

	void StoreOutput();
	void BestPhone(int budget);
};
#endif // !PHONE


