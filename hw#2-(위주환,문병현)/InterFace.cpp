#include<iostream>
#include"InterFace.h"
using namespace std;
	int InterFace::event(){
		int num;
		cout << "���� 1: ���� 2: ��κ��� 3: ���� 4: >> ";
		cin >> num;
		return num;
	}
	int InterFace::saving(){
		int num;
		cout << "�� 1: �� 2: �簢�� 3: >> ";
		cin >> num;
		return num;
	}