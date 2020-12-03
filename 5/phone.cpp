#include "phone.h"

Smartphone::Smartphone() {
	m_model = 'n/a';
	m_amount = 0;
	m_price = 0;
	m_memory = 0;
}

Smartphone::~Smartphone() {
	
}

Smartphone::Smartphone(string model, int price, int memory, int amount) {
	m_model = model;
	m_price = price;
	m_memory = memory;
	m_amount = amount;
	m_numbers = new int[amount];
}

void Smartphone::SmartphoneOutput() {
	cout << "Model:" << m_model << endl << "Price, $: " << m_price << endl << "Memory, gb: " << m_memory << endl
		<< "Numbers:" << endl;
	for (int i = 0;i < m_amount;i++) {
		cout << m_numbers[i] << endl;
	}
}

PhoneStore::PhoneStore() {
}

PhoneStore :: ~PhoneStore() {
	delete[] Store;
}

PhoneStore::PhoneStore(int many) {
	m_many = many;
	Store = new Smartphone[m_many];
}

void PhoneStore::StoreOutput() {
	for (int i = 0;i < m_many; i++) {
		for (int j = (m_many - 1); j > i; j--) {
			if (Store[j - 1].getPrice() > Store[j].getPrice()) {
				swap(Store[j], Store[j - 1]);
			}
		}
	}

	for (int i = 0;i < m_many;i++) {
		cout << i + 1 << ". ";
		Store[i].SmartphoneOutput();
		cout << endl;
	}
}

void PhoneStore::BestPhone(int budget) {
	int k = 0, j;
	if (Store[0].getPrice() > budget) { cout << "Don't find" << endl; }
	else {
		for (int i = 0; i < m_many; i++)
		{
			if (Store[i].getPrice() <= budget && Store[i].getMemory() > k) {
				k = Store[i].getMemory();
				j = i;
			}
		}
		Store[j].SmartphoneOutput();
	}
}





