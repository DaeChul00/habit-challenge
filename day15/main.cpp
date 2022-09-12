#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);

    unsigned int input;
    unsigned int point = 1;
    unsigned int temp = 6;
    unsigned int result = 1;

    cin >> input;

    while (true)
    {
        if (point >= input)
        {
            break;
        }

        point += temp;
        temp += 6;
        ++result;
    }
    cout << result;
}