#ifndef PUBLICATION_H
#define PUBLICATION_H

#include<iostream>
#include<string>

using namespace std;

class Publication {
protected:
	string m_name, m_lang;
public:
	Publication();
	Publication(string name, string lang);

	virtual void display();
};

class Magazine : public Publication {
private:
	string m_topic;
	int m_period;

public:
	Magazine();
	Magazine(string name, string lang, string topic, int period);

	void display() override;
};

class Book : public Publication {
protected:
	string m_author, m_genre;
public:
	Book();
	Book(string name, string lang, string author, string genre);

	void display() override;
};

class Audiobook : public Book {
private:
	double m_time;
public: 
	Audiobook();
	Audiobook(string name, string lang, string author, string genre, double time);

	void display() override;
};

class Ebook : public Book {
private: 
	string m_format;
public:
	Ebook();
	Ebook(string name, string lang, string author, string genre, string format);

	void display() override;
};

class Print : public Book {
protected:
	int m_weight;
public:
	Print();
	Print(string name, string lang, string author, string genre, int weight);

	void display() override;
};

class Monograph : public Print {
private:
	string m_review;
public: 
	Monograph();
	Monograph(string name, string lang, string author, string genre, int weight, string review);

	void display() override;
};
#endif // !PUBLICATION_H

