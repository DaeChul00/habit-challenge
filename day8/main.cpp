#include <iostream>

using namespace std;

// 아스키 코드 변환
//int main() 
// {
//    char A;
//    cin >> A;
//    cout << (int)A;
//
//    return 0;
//}


// 9개의 서로 다른 자연수가 주어질 때, 이들 중 최댓값을 찾고 그 최댓값이 몇 번째 수인지 구하기
int main() {
    int input[9];
    int n;
    cin >> input[0];
    n = 0;
    for (int i = 1; i < 9; i++) {
        cin >> input[i];
        if (input[i] > input[n]) {
            n = i;
        }
    }
    cout << input[n] << endl;
    cout << n + 1;

    return 0;
}