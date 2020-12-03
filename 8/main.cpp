#include "list.h"

int main() {
	
	StackList SL;
	cout << "Push(): " << endl;
	SL.Push(1, 2);
	SL.Push(8, -7);
	SL.Push(1.2, -6);
	SL.Print();

	cout << "PushToEnd(): " << endl;
	SL.PushToEnd(7, 8, SL);
	SL.Print();

	cout << "Number of elements: " << SL.Count() << endl;
	cout << "Search: " << SL.Search(1, 2) <<endl;

	cout << "Popped element: " << SL.Pop() << endl;

	SL.~StackList();

	system("pause");
	return 0;
}