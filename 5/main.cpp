#include "phone.h"

int main() {
	Smartphone s1( "apple", 400, 12, 2);
	s1.setNumber(0, 123456);
	s1.setNumber(1, 987654);

	Smartphone s2( "samsung", 250, 32, 2);
	s2.setNumber(0, 147258);
	s2.setNumber(1, 963852);

	Smartphone s3( "htc", 180, 64, 2);
	s3.setNumber(0, 987654);
	s3.setNumber(1, 789456);

	int n = 3;
	PhoneStore store(n);

	store.setPhone(0, &s1);
	store.setPhone(1, &s2);
	store.setPhone(2, &s3);


	store.StoreOutput();

	int budget;
	cout << "Enter budget, $: ";
	cin >> budget;

	store.BestPhone(budget);

	system("pause");
	return 0;
}