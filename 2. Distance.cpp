#include <iostream>
#include <cmath>

class Point {
private:
	int x = 0;
	int y = 0;
public:
	Point() : x(0), y(0) {};
	Point(int x_, int y_) : x(x_), y(y_) {};

	Point(std::istream& istr);
	double euclidianDistance(const Point& p2);
};

Point::Point(std::istream& istr) {

	istr >> x >> y;
}

double Point::euclidianDistance(const Point& p2) {
	return sqrt(pow(x - p2.x, 2) + pow(y - p2.y, 2));
}

int main() {
	Point p1(std::cin);
	Point p2(std::cin);
	std::cout.setf(std::ios::fixed);
	std::cout.precision(3);
	std::cout << p1.euclidianDistance(p2) << std::endl;

	return 0;
}