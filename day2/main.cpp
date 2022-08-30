#include <iostream>

using namespace std;

int main()
{
	// bool, char, short, int, long, float, double
	//       127   32000  21억
	// bool (1byte) : 참 또는 거짓을 저장하는 변수
	// char (1byte) : 문자를 저장할때 사용하는 변수
	// short는 유난히 작은 정수, long은 유난히 큰 정수 그외에 대부분은 int
	
	/*bool b = true;

	int var = 10;
	b = var == 10;

	if (b)
		cout << "var == 10" << endl;*/

	// char c = 65; //127을 초과하는 수를 넣게 되면 변수에 의도하지 않은 이상한 값 이 들어감 -> 산술 오버플로우
	 /*int var = 'A';
	 cout << var << endl;*/
	
	/*float f = 3.14f;*/
	//float 변수에 실수값을 넣을 때는 숫자 뒤에 f를 붙여주야 한다. 그렇지 않으면 그 값은 double 자료형으로 인식된다
	/*double lf = 2.71;*/

	/*unsigned char c = 255;*/
	//이렇게 적을시 이 변수는 더 이상 부호비트를 사용하지 않습니다. 
	//부호비트를 일반 비트로 사용하기 때문에 8비트의 최대값인 255까지 저장가능
	//unsigned는 bool을 제외한 모든 자료형에 사용가능

	//처음에만 값을 넣어주고  그 뒤로는 변수가 아니라 상수로 사용하고 싶을때는 변수 앞에 const 키워드를 붙어준다
	const char c = 127;
	//초기화로만 값을 할당 가능하고 이후로는 수정할 수 없음 대체로 무언가를 수정하지 못하게 막는 용도로 사용
	return 0;
}