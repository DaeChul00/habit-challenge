#include <iostream>

using namespace std;

int main()
{
	// 0���� 100���� ���� �� ���

	/*int sum = 0;
	cout << "0���� 100���� ���� ��" << endl;
	for (int i = 0; i <= 100; ++i)
		sum += i;

	cout << sum << endl;*/
	
	// 0���� 100���� ���� �� Ȧ�� ���

	/*cout << "0���� 100���� ���� �� Ȧ�� ���" << endl;
	
	for (int i = 1; i < 100; i += 2)
	{		
		cout << i << endl;
	}*/

	// 100���� 0������ ���� �� 7�� ����̰� �� 8�� ����� ������ ū ������� ���

	/*cout << "100���� 0������ ���� �� 7�� ����̰� �� 8�� ����� ������ ū ������� ���" << endl;

	for (int i = 100; i >= 0; --i)
	{
		if (i % 7 == 0 || i % 8 == 0)
			cout << i << endl;
	}*/

	// 2���� 100������ ���� �߿��� �Ҽ���  ��� ���

	/*for (int i = 2; i <= 100; ++i)
	{
		int b = 0;
		for (int j = 2; j < i; ++j)
		{
			if (i % j == 0)
			{
				b = 1;
				break;
			}
		}

		if (b == 0)
			cout << i << endl;
	}*/

	return 0;
}