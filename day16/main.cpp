#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    for (int tc = 1; tc <= T; tc++) {
        int R;
        cin >> R;
        char s = 'a';
        while (1) {
            scanf_s("%c", &s);
            if (s == '\0' || s == '\n') break;
            if (s == ' ') continue;
            for (int i = 0; i < R; i++) cout << s;
        }
        cout << endl;
    }
    return 0;
}