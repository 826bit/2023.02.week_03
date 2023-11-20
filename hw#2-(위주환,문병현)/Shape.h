#pragma once
class Shape{
public:
	Shape* next;
	Shape() { next = NULL; }
	~Shape(){}
	Shape *add(Shape* p);
	Shape *getNext() { return next; }
	virtual void paint(int count);
	void setNext(Shape* p) { this->next = p->next; }
};