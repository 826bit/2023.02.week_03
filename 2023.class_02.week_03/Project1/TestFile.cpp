/*
#include<ios>// Q) ios와 iostream 링킹 테스트

int main() {
	using namespace std;
	cout << "ios link test"; // 오류발생 
}
// R) 정의되지 않음 <iostream>을 선언해야지만 cout cin 을 사용할 수 있음
*/

/*
#include<iostream>// Q) cout 인자 연속 출력 테스트
#include<string>
int main(){
	int n = 10;
	double d = 3.14;
	char c = 'c';
	std::string s = "string";
	//std::cout << n d c s << std::endl; // 오류발생
	//std::cout << n, d, c, s << std::endl; ','를 사용해도 정의되지 않음
	std::cout << n << d << c << s << std::endl; // '103.14cstring' 이 출력됨
}
// R)인자들을 분리하기 위해서는 무조건 '<<'를 사용해야됨
// +Q) 다른방법이 있는가?
*/
 
/*
#include<iostream> Q) cout외부에서 쉬프트 연산자를 사용하면 어떻게 되는가?
int main() {
	using namespace std;
	int shift = 10;
	cout << "cout 쉬프트" << endl;
	cout << shift << 3 << endl; // cout 내에서 쉬프트 연산자가 오버로드 되어 '103'이 출력됨
	shift = shift << 3;
	cout << shift << endl; //cout 외부에서는 쉬프트 연산자가 오버로드 되지 않아 '80'이 출력됨
}
// R) cout 과 cin이 실행될 때에만 쉬프트 연산자가 오버로드된다. 따라서 쉬프트 연산자는 정상 실행된다,
// +Q) 그렇다면 cout 내에서 쉬프트 연산자를 사용하는 방법은 없을까? ex) cout << w * w << endl
*/

/*
#include <iostream> // Q) namespace 각각 using 선언후 그 인자를 사용하면 어떻게 되는가?
namespace circle { // 원의 넓이계산
	void cul(double r) {
		std::cout << 3.14 * r * r << std::endl;
	}
}
namespace squre { // 정사각형의 넓이계산
	void cul(double w) {
		std::cout << w * w<< std::endl;
	}
}
int main() {
	using namespace circle;
	using namespace squre;

	//cul(2); // 오류발생
	circle::cul(3.53333); // 정상실헹
} 
// R) 두가지 이상의 namespace에서 같은 이름의 인수 사용시 circle::cul처럼 namespace를 정의해야 사용가능
*/

/*
#include<iostream>// Q) namespace 호출과 호출순서
namespace f1 {
	using namespace std;
	int f(int x) {
		int y = x * 2; // if) x=2일때, y = 4
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
	f2::h(); //결과값: 4 \\n 40 \n 20\n
}
// R) f1::f() -> f1::g() -> f2::h()순으로 실행되어 그순서대로 결과값이 출력되었다
*/

/*
#include<iostream>// Q)namespace가 재귀적 용법으로 사용가능한가?
namespace test {
	using namespace std;
	int re(int r) {
		if (r == 0) { //중단조건
			cout << "프로그램을 종료합니다" << endl;
			return(0);
		}
		cout << r-- << endl;//r이 5부터 출력되어 1로 감소된다.
		return re(r);
	}
}
void main() {
	test::re(5);
}
// R) 재귀적 용법으로 활용가능하다.
*/