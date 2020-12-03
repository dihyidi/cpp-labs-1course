#include"publication.h"

int main() {

	Publication p("smth", "eng");
	p.display();
	cout << endl;

	Magazine m("smth", "ua", "smwt", 1);
	m.display();
	cout << endl;

	Book b("smth", "esp", "Orwell", "novel");
	b.display();
	cout << endl;

	Audiobook a("smth", "de", "Caroll", "novel", 182);
	a.display();
	cout << endl;

	Ebook e("smhow", "norw", "Smbdy", "tale", "epub");
	e.display();
	cout << endl;

	Print pr("name", "chinese", "Ji", "poem", 200);
	pr.display();
	cout << endl;

	Monograph mon("monograph", "ru", "Author", "Monograph", 300, "Professor");
	mon.display();
	cout << endl;

	system("pause");
	return 0;
}