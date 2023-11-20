#include <iostream>
#include "Shape.h"
#include "Circle.h"
#include "Line.h"
#include "Rect.h"
#include "InterFace.h"
#include "Graphic_editer.h"
using namespace std;
Shape* pfront, * pback, * pdel;
Shape* pStart = NULL;
Shape* pLast;
int node_size = 0;
void Graphic_editer::run(){
	while (true) {
		switch (InterFace::event())
		{
		case 1: {
			new_node();
			break;
		}
		case 2: {
			if (pStart == NULL) {
				cout << "List Empty\n";
				break;
			}
			del(Graphic_editer::delete_node());
			break;
		}
		case 3: {
			show_nodes();
			break;
		}
		case 4: exit(0);
		default:
			break;
		}
	}
}
void Graphic_editer::new_node() {
	bool loop = true;
	while (loop) {
		switch (InterFace::saving())
		{
		case 1: {
			if (node_size == 0){
				pStart = new Line();
				pLast = pStart; 
			}
			else
				pLast = pLast->add(new Line());;
			node_size++;
			cout << node_size;
			loop = false;
			break;
		}
		case 2: {
			if (node_size == 0) {
				pStart = new Circle();
				pLast = pStart;;
			}
			else
				pLast = pLast->add(new Circle());
			node_size++;
			loop = false;
			break;
		}
		case 3: {
			if (node_size == 0) {
				pStart= new Rect();
				pLast = pStart;
			}
			else
				pLast = pLast->add(new Rect());
			node_size++;
			loop = false;
			break;
		}
		default:
			cout << "Undefined..." << endl;
		}
	}
}
int Graphic_editer::delete_node(){
	int index;;
	cout << "삭제하고자 하는 도형의 인덱스 >> ";
	cin >> index;
	return index;
}
void Graphic_editer::del(int n) {
	Shape* p = pStart;
	Shape* del = pStart;

	if (n < node_size) {
		for (int i = 0; i < n; i++) {
			p = del;
			del = del->getNext();
		}
		if (n == 0)
			pStart = p->getNext();
		else
			p->setNext(del);
		node_size--;
		if (node_size == 1) pLast = pStart;
		delete del;

	}
	else
		cout << "인덱스를 잘못 입력하셨습니다." << endl;
}
void Graphic_editer::show_nodes() {
	Shape* p = pStart;
	int count = 0;
	while (p != NULL) {
		p->paint(count++);
		p = p->getNext();
	}
}