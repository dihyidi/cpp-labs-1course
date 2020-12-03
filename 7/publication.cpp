#include"publication.h"

Publication::Publication() {
	m_name = 'n/a';
	m_lang = 'n/a';
}

Publication::Publication(string name, string lang) {
	m_name = name;
	m_lang = lang;
}

void Publication::display() {
	cout << "Name: " << m_name << endl << "Language: " << m_lang << endl;
}


Magazine::Magazine() {
	m_topic = 'n/a';
	m_period = 0;
}

Magazine::Magazine(string name, string lang, string topic, int period) :Publication(name, lang) {
	m_topic = topic;
	m_period = period;
}

void Magazine::display() {
	Publication::display();
	cout << "Topic: " << m_topic << endl << "Period, times per month: " << m_period << endl;
}


Book::Book() {
	m_author = 'n/a';
	m_genre = 'n/a';
}

Book::Book(string name, string lang, string author, string genre)
	: Publication(name, lang) {
	m_author = author;
	m_genre = genre;
}

void Book::display() {
	Publication::display();
	cout << "Author: " << m_author << endl << "Genre: " << m_genre << endl;
}


Audiobook::Audiobook() {
	m_time = 0;
}

Audiobook::Audiobook(string name, string lang, string author, string genre, double time)
	:Book(name, lang, author, genre) {
	m_time = time;
}

void Audiobook::display() {
	Book::display(); 
	cout << "Time, min: " << m_time << endl;
}


Ebook::Ebook() {
	m_format = 'n/a';
}

Ebook::Ebook(string name, string lang, string author, string genre, string format)
	:Book(name, lang, author, genre) {
	m_format = format;
}

void Ebook::display() {
	Book::display();
	cout << "Format: " << m_format << endl;
}


Print::Print() {
	m_weight = 0;
}

Print::Print(string name, string lang, string author, string genre, int weight)
	:Book(name, lang, author, genre) {
	m_weight = weight;
}

void Print::display() {
	Book::display();
	cout << "Weight, g: " << m_weight << endl;
}


Monograph::Monograph() {
	m_review = 'n/a';
}

Monograph::Monograph(string name, string lang, string author, string genre, int weight,
	string review) :Print(name, lang, author, genre, weight) {
	m_review = review;
}

void Monograph::display() {
	Print::display();
	cout << "Review author: " << m_review << endl;
}