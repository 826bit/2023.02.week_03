#pragma once
class Shape {
protected:
	virtual void make_shape() = 0;
public:
	void call();
};