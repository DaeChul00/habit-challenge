#include <iostream>
using namespace std;

int main() {

    int arr[5], i;
    int* p = arr;
    cout << "5개의 숫자를 입력하시오:";
    cin >> *p >> *(p + 1) >> *(p + 2) >> *(p + 3) >> *(p + 4);
    cout << "입력한 숫자 역순으로 변환:\n";
    for (i = 4; i >= 0; i--)
        cout << *(p + i) << endl;


    return 0;

}