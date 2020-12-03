#include "segment.h"


Point::Point() {
	x = 0;
	y = 0;
	z = 0;
}

Point::Point(int x, int y, int z) {
	this->x = x;
	this->y = y;
	this->z = z;
}

Segment::Segment(Point p1, Point p2) {
	coordinates.setX(p2.getX() - p1.getX());
	coordinates.setY(p2.getY() - p1.getY());
	coordinates.setZ(p2.getZ() - p1.getZ());
}

double Segment::Length() {
	length = 1.0 * sqrt(coordinates.getX()*coordinates.getX() + coordinates.getY()* coordinates.getY() + coordinates.getZ()* coordinates.getZ());
	return length;
}

bool operator == (Point& p1, Point& p2) {
	return (p1.x == p2.x && p1.y == p2.y && p1.z == p2.z);
}

bool operator != (Point& p1, Point& p2) {
	return (p1.x != p2.x || p1.y != p2.y || p1.z != p2.z);
}

bool operator > (Segment& s1, Segment& s2) {
	return s1.Length() > s2.Length();
}

bool operator < (Segment& s1, Segment& s2) {
	return s1.Length() < s2.Length();
}

istream& operator >> (istream& in, Point& point) {
	cout << "x = ";
	in >> point.x;
	cout << "y = ";
	in >> point.y;
	cout << "z = ";
	in >> point.z;
	cout << endl;

	return in;
}

ostream& operator << (ostream& out, Segment& s) {
	out << "Segment [" << s.coordinates.getX() << "; " << s.coordinates.getY() << "; " << s.coordinates.getZ()
		<< "]" << endl << "Length: " << s.Length() << " single segm." << endl
		<< "#########################################################################" << endl;

	return out;
}

