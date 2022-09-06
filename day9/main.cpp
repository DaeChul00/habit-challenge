#include <iostream>
using namespace std;

// 계단식 별출력
//int main()
//{
//    int N;
//    cin >> N;
//    for (int i = 1; i <= N; i++) {
//        for (int j = 0; j < i; j++) {
//            cout << '*';
//        }
//        cout << endl;
//    }
//    return 0;
//}

// 백준 2920 음계
int main() {
    int temp, pre, check = 0;
    cin >> temp >> pre;
    if (pre < temp) check = -1;
    else check = 1;

    for (int i = 2; i < 8; i++) {
        cin >> temp;
        if (pre < temp) {
            if (check == 1) pre = temp;
            else { check = 0; break; }
        }
        else {
            if (check == -1) pre = temp;
            else { check = 0; break; }
        }
    }

    if (check == 0) cout << "mixed";
    else if (check == 1) cout << "ascending";
    else cout << "descending";

    return 0;
}