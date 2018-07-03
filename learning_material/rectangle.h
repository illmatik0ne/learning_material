#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle {
	int width, height;
public:
	Rectangle(int, int);
	int get_area();
	int get_width();
	int get_height();
};

#endif