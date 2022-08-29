#include <iostream>

using namespace std;

int main()
{
	// 0부터 100까지 수의 합 출력

	/*int sum = 0;
	cout << "0부터 100까지 수의 합" << endl;
	for (int i = 0; i <= 100; ++i)
		sum += i;

	cout << sum << endl;*/
	
	// 0부터 100까지 수들 중 홀수 출력

	/*cout << "0부터 100까지 수들 중 홀수 출력" << endl;
	
	for (int i = 1; i < 100; i += 2)
	{		
		cout << i << endl;
	}*/

	// 100부터 0까지의 수들 중 7의 배수이거 나 8의 배수인 수들을 큰 순서대로 출력

	/*cout << "100부터 0까지의 수들 중 7의 배수이거 나 8의 배수인 수들을 큰 순서대로 출력" << endl;

	for (int i = 100; i >= 0; --i)
	{
		if (i % 7 == 0 || i % 8 == 0)
			cout << i << endl;
	}*/

	// 2부터 100까지의 수들 중에서 소수를  모두 출력

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