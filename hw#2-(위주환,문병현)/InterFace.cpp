#include<iostream>
#include"InterFace.h"
using namespace std;
	int InterFace::event(){
		int num;
		cout << "삽입 1: 삭제 2: 모두보기 3: 종료 4: >> ";
		cin >> num;
		return num;
	}
	int InterFace::saving(){
		int num;
		cout << "선 1: 원 2: 사각형 3: >> ";
		cin >> num;
		return num;
	}