#pragma once
class Square {
private:
	double side{ 1.0 };
	static int numberofObjects;
public:
	double getSide() { return side; }
	void setSide(double side) { this->side = side; }
	Square(double side) {
		this->side = side;
		numberofObjects++;
	}
	Square() : Square(1.0) {};
	double getArea() { return side * side; }
	static int getNumberofObjects() { return numberofObjects; }
	int getNumberofObjectsNoneStatic() { return numberofObjects; }
};