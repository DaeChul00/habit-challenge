#include <iostream>

using namespace std;

void Swap(int* param0, int* param1)
{
	int temp = *param0;
	*param0 = *param1;
	*param1 = temp;
}

int main()
{
	int num0 = 5, num1 = 10;

	Swap(&num0, &num1);

	cout << num0 << endl;
	cout << num1 << endl;

	return 0;
}