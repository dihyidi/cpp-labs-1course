#ifndef SEGMENT_H
#define SEGMENT_H

#include<iostream>
#include<cmath>

using namespace std;

class Point {
	int x, y, z;
public:
	Point();
	Point(int x, int y, int z);

	int getX() { return x; }
	int getY() { return y; }
	int getZ() { return z; }

	void setX(int x) { this->x = x; }
	void setY(int y) { this->y = y; }
	void setZ(int z) { this->z = z; }

	friend istream& operator >> (istream& in, Point& point);

	friend bool operator == (Point& p1, Point& p2);

	friend bool operator != (Point& p1, Point& p2);
};

class Segment {
	Point p1, p2, coordinates;
	double length;

public:

	Segment(Point p1, Point p2);

	double Length();

	double getLength() { return length; }
	void setLegth(double length) { this->length = length; }

	friend ostream& operator << (ostream& out, Segment& s);

	Segment operator *=(Segment& s2) {
		length *= (1 / s2.length);
		return *this;
	}

	friend bool operator > (Segment& s1, Segment& s2);

	friend bool operator < (Segment& s1, Segment& s2);
};

#endif // !SEGMENT_H
