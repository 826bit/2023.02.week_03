/*
#include<ios>// Q) ios�� iostream ��ŷ �׽�Ʈ

int main() {
	using namespace std;
	cout << "ios link test"; // �����߻� 
}
// R) ���ǵ��� ���� <iostream>�� �����ؾ����� cout cin �� ����� �� ����
*/

/*
#include<iostream>// Q) cout ���� ���� ��� �׽�Ʈ
#include<string>
int main(){
	int n = 10;
	double d = 3.14;
	char c = 'c';
	std::string s = "string";
	//std::cout << n d c s << std::endl; // �����߻�
	//std::cout << n, d, c, s << std::endl; ','�� ����ص� ���ǵ��� ����
	std::cout << n << d << c << s << std::endl; // '103.14cstring' �� ��µ�
}
// R)���ڵ��� �и��ϱ� ���ؼ��� ������ '<<'�� ����ؾߵ�
// +Q) �ٸ������ �ִ°�?
*/
 
/*
#include<iostream> Q) cout�ܺο��� ����Ʈ �����ڸ� ����ϸ� ��� �Ǵ°�?
int main() {
	using namespace std;
	int shift = 10;
	cout << "cout ����Ʈ" << endl;
	cout << shift << 3 << endl; // cout ������ ����Ʈ �����ڰ� �����ε� �Ǿ� '103'�� ��µ�
	shift = shift << 3;
	cout << shift << endl; //cout �ܺο����� ����Ʈ �����ڰ� �����ε� ���� �ʾ� '80'�� ��µ�
}
// R) cout �� cin�� ����� ������ ����Ʈ �����ڰ� �����ε�ȴ�. ���� ����Ʈ �����ڴ� ���� ����ȴ�,
// +Q) �׷��ٸ� cout ������ ����Ʈ �����ڸ� ����ϴ� ����� ������? ex) cout << w * w << endl
*/

/*
#include <iostream> // Q) namespace ���� using ������ �� ���ڸ� ����ϸ� ��� �Ǵ°�?
namespace circle { // ���� ���̰��
	void cul(double r) {
		std::cout << 3.14 * r * r << std::endl;
	}
}
namespace squre { // ���簢���� ���̰��
	void cul(double w) {
		std::cout << w * w<< std::endl;
	}
}
int main() {
	using namespace circle;
	using namespace squre;

	//cul(2); // �����߻�
	circle::cul(3.53333); // �������
} 
// R) �ΰ��� �̻��� namespace���� ���� �̸��� �μ� ���� circle::culó�� namespace�� �����ؾ� ��밡��
*/

/*
#include<iostream>// Q) namespace ȣ��� ȣ�����
namespace f1 {
	using namespace std;
	int f(int x) {
		int y = x * 2; // if) x=2�϶�, y = 4
		cout << y << endl;
		return(y);
	}
	int g() {
		int z = f(2) * 10; // f(2) = 4 , z = 40
		cout << z << endl;
		return(z);
	}
}
namespace f2 {
	using namespace std;
	void h() {
		int a = f1::g() / 2; // g() = 40, a = 20
		cout << a << endl;
	}
}
int main() {
	f2::h(); //�����: 4 \\n 40 \n 20\n
}
// R) f1::f() -> f1::g() -> f2::h()������ ����Ǿ� �׼������ ������� ��µǾ���
*/

/*
#include<iostream>// Q)namespace�� ����� ������� ��밡���Ѱ�?
namespace test {
	using namespace std;
	int re(int r) {
		if (r == 0) { //�ߴ�����
			cout << "���α׷��� �����մϴ�" << endl;
			return(0);
		}
		cout << r-- << endl;//r�� 5���� ��µǾ� 1�� ���ҵȴ�.
		return re(r);
	}
}
void main() {
	test::re(5);
}
// R) ����� ������� Ȱ�밡���ϴ�.
*/