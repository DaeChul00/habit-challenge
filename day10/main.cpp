#include <iostream>
using namespace std;

// 백준 2739
//int main() 
// {
//    int N;
//    cin >> N;
//    for (int i = 1; i < 10; i++) {
//        cout << N << " * " << i << " = " << N * i << endl;
//    }
//    return 0;
//}

// 백준 2355
int main()
{
    long long a, b, sum = 0;
    cin >> a >> b;
    if (a > b) {
        int temp = a;
        a = b;
        b = temp;
    }
    if (a >= 0 && b >= 0) {
        sum += b * (b + 1) / 2;
        sum -= a * (a - 1) / 2;
    }
    else if (a < 0 && b >= 0) {
        sum += b * (b + 1) / 2;
        sum -= a * (a - 1) / 2;
    }
    else if (a < 0 && b < 0) {
        sum -= a * (a - 1) / 2;
        sum += b * (b + 1) / 2;
    }
    cout << sum;
}