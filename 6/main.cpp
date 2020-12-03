#include"segment.h"

int main() {
	cout << "Segment s1:" << endl;
	Point p1;
	cout << "Enter p1: " << endl;
	cin >> p1;

	Point p2;
	cout << "Enter p2: " << endl;
	cin >> p2;

	Segment s1(p1, p2);

	if (p1 == p2) cout << "That's a point." << endl;
	else {
		cout << s1 << endl;

		cout << "New sigle segment s2:" << endl;
		Point p3;
		cout << "Enter p3: " << endl;
		cin >> p3;

		Point p4;
		cout << "Enter p4: " << endl;
		cin >> p4;

		Segment s2(p3, p4);

		if (p3 == p4) cout << "That's a point." << endl;
		else {
			cout << s2 << endl;

			s1 *= s2;

			cout << "New length s1: " << s1.getLength() << "s2" << endl;
		}
	}
	system("pause");
	return 0;
}