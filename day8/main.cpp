#include <iostream>

using namespace std;

// �ƽ�Ű �ڵ� ��ȯ
//int main() 
// {
//    char A;
//    cin >> A;
//    cout << (int)A;
//
//    return 0;
//}


// 9���� ���� �ٸ� �ڿ����� �־��� ��, �̵� �� �ִ��� ã�� �� �ִ��� �� ��° ������ ���ϱ�
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