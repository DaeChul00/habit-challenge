#include <iostream>

using namespace std;
// 오븐시계 문제
int main(int argc, char const* argv[]) {
	int A, B, C; //A = 시, B = 분, C = 조리시간 
	cin >> A >> B >> C;

	int min = 60 * A + B;   // 시 -> 분
	min += C;

	int hour = (min / 60) % 24;
	int minute = min % 60;

	cout << hour << " " << minute;
	return 0;
}