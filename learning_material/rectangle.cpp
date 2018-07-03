#include "stdafx.h"
#include "rectangle.h"
#include <iostream>

using namespace std;

int Rectangle::get_area() { return width * height; }
int Rectangle::get_width() { return width; }
int Rectangle::get_height() { return height; }

Rectangle::Rectangle (int x, int y) {
	width = x;
	height = y;
}

/*
int main() {
	Rectangle rect (3, 4);
	Rectangle rectb (4, 5);
	Rectangle rectc (5, 6);
	cout << "area: " << rect.get_area() << '\n';
	cout << "width: " << rect.get_width() << '\n';
	cout << "height: " << rect.get_height() << '\n';
	cout << "area: " << rectb.get_area() << '\n';
	cout << "width: " << rectb.get_width() << '\n';
	cout << "height: " << rectb.get_height() << '\n';
	cout << "area: " << rectc.get_area() << '\n';
	cout << "width: " << rectc.get_width() << '\n';
	cout << "height: " << rectc.get_height() << '\n';
	return 0;
}
*/