#pragma once
#include <iostream>

using namespace std;
class Rectangle
{
private:
	int height;
	int width;
	int countPerimeter() {
		return height + height + width + width;
	}
	int countArea() {
		return height * width;
	}
	
	
	
public:
	Rectangle() {
		height = 0;
		width = 0;
	}

	int getHeight() {
		return this->height;
	}

	int getWidth() {
		return this->width;
	}

	void setHeight(int height) {
		this->height = height;
	}

	void setWidth(int width) {
		this->width = width;
	}

	int getArea() {
		return countArea();
	}

	int getPerimeter() {
		return countPerimeter();
	}

	
	
	
};

