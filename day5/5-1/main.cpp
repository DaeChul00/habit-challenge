#include <iostream>

using namespace std;

void PrintAll(int* ptr)
{
	for (int i = 0; i < 6; ++i)
	{
		cout << *(ptr + i) << endl;
	}
}

int main()
{
	int arr[6] = { 0, 1, 2, 3, 4, 5 };
	/*int* ptr = &arr[0];*/
	PrintAll(arr);

	// �ּҰ� ���
	/*cout << ptr << endl;
	cout << ptr + 1 << endl;*/

	// ���������� ���
	/*cout << *ptr << endl;
	cout << *(ptr + 1) << endl;*/

	// for�� �迭 ���
	/*for (int i = 0; i < 6; ++i)
	{
		cout << *(ptr + i) << endl;
	}*/
	
	return 0;
}