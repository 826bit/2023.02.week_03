#include <iostream>
#include "Shape.h"
using namespace std;
Shape* Shape::add(Shape* p) {
	this->next = p;
	return p;
}
void Shape::paint(int count) {};