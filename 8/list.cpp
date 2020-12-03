#include"list.h"

StackList::StackList() { 
	pTop = nullptr;
}

StackList::~StackList() {
	NodeStack* p;
	NodeStack* p2;

	p = pTop;
	while (p != nullptr) {
		p2 = p;
		p = p->next;
		delete p2;
	}
	pTop = nullptr;

}

void StackList::Push(double real, double img) {
	NodeStack* p = new NodeStack;

	complex<double> item(real, img);
	p->item = item;
	p->next = pTop;

	pTop = p;
}

void StackList::Push(complex<double> item) {
	NodeStack* p = new NodeStack;

	p->item = item;
	p->next = pTop;

	pTop = p;
}

complex<double> StackList::Pop() {
	if (pTop == nullptr) return 0;
	else {
		NodeStack* p2;
		complex<double> item = pTop->item;

		p2 = pTop;
		pTop = pTop->next;

		delete p2;
		return item;
	}
}

int StackList::Count() {
	if (pTop == nullptr) 
		return 0;
	else
	{
		NodeStack* p = pTop;
		int count = 0;
		while (p != nullptr) {
			count++;
			p = p->next;
		}
		return count;
	}
}

void StackList::Print() {
	if (pTop == nullptr) {
		cout << "Stack is empty." << endl;
	}

	else {
		NodeStack* p;
		p = pTop;
		while (p != nullptr) {
			cout << p->item << endl << p <<endl;
			p = p->next;
		}
		cout << endl;
	}
}

NodeStack* StackList::Search(double real, double img) {
	complex<double> item(real, img);
	NodeStack* p = pTop;
	while (p != nullptr) {
		if (p->item == item) return p;
		p = p->next;
	}
	return nullptr;
}

void StackList::PushToEnd(double real, double img, StackList& SL) {
	StackList SL1;

	NodeStack* p = SL.pTop;

	while (p != nullptr) {
		SL1.Push(p->item);
		p = p->next;
	}

	SL.~StackList();
	SL1.Push(real, img);

	NodeStack* p1 = SL1.pTop;

	while (p1 != nullptr) {
		SL.Push(p1->item);
		p1 = p1->next;
	}
}