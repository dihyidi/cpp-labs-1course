#ifndef LIST_H
#define LIST_H

#include<iostream>
#include<complex>

using namespace std;


struct NodeStack {
	complex <double> item;
	struct NodeStack* next;
};

class StackList {
private:
	NodeStack* pTop;

public:
	StackList();

	~StackList();

	void Push(double real, double img);

	void Push(complex<double> item);

	void PushToEnd(double real, double img, StackList& SL);

	int Count();

	void Print();

	complex<double> Pop();

	NodeStack* Search(double real, double img);

};



#endif // !LIST_H
