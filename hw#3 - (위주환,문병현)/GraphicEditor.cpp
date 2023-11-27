#include <iostream>
#include <vector>
#include "GraphicEditor.h"
#include "Shape.h"
#include "Line.h"
#include "Circle.h"
#include "Rect.h"
using namespace std;
GraphicEditor g;
vector <Shape*> shape_list;
vector<Shape*>::iterator it;
void GraphicEditor::InterFace() {
	cout << "�׷��� �������Դϴ�." << endl;
	g.Menu();
}
void GraphicEditor::Menu() {
	int aw;
	while (true) {
		cout << "����: 1, ����: 2, ��κ���: 3, ����: 4 >> ";
		cin >> aw;
		switch (aw)
		{
		case 1://call Shaper()
			g.Shaper();
			break;
		case 2://call delete_vector()
			if (shape_list.empty()) {
				cout << "The vector is empty" << endl;
				break;
			}
			g.Delete_vector();
			break;
		case 3://call show_list()
			if (shape_list.empty()) {
				cout << "The vector is empty" << endl;
				break;
			}
			g.show_list();
			break;
		case 4://end program
			exit(1);
		default:
			cout << "Error" << endl;
		}
	}
}
void GraphicEditor::Shaper() {
	int aw;
	bool when_end = true;
	while (when_end) {
		cout << "��: 1, ��: 2, �簢��: 3 >>";
		cin >> aw;
		switch (aw)
		{
		case 1: //stack new Line
			shape_list.push_back(new Line());
			when_end = false;
			break;
		case 2: //stack new Circle
			shape_list.push_back(new Circle());
			when_end = false;
			break;
		case 3: //stack new Rect
			shape_list.push_back(new Rect());
			when_end = false;
			break;
		default:
			cout << "Error" << endl;
		}
	}
}
void GraphicEditor::Delete_vector() {
	int aw;
	while (true) {
		cout << "�����ϰ��� �ϴ� ���� �ε��� >> ";
		cin >> aw;
		if (aw >= shape_list.size() || aw < 0) { cout << "Error" << endl; }
		else {
			it = shape_list.begin();
			shape_list.erase(it + aw);
			break;
		}
	}
}
void GraphicEditor::show_list() {
	for (int i = 0; i < shape_list.size(); i++) {
		cout << i << " : ";
		shape_list[i]->call();
	}
}
void GraphicEditor::Run(){
	g.InterFace();
}