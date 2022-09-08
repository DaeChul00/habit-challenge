#include <iostream>

using namespace std;

//M이상 N이하의 소수를 모두 출력
int main()
{
	bool primeNum[1000001];//소수이면 true 아니면 false
	int M, N;
	cin >> M >> N;
	for (int i = M; i <= N; i++) {
		primeNum[i] = true;
	}

	primeNum[1] = false;//1은 소수가 아니므로
	for (int i = 2; i < N; i++)//2부터 시작해서
	{
		for (int j = 2 * i; j <= N; j = j + i)//그 배수들은 소수가 아니므로
		{
			primeNum[j] = false;
		}
	}

	for (int i = M; i <= N; i++)
	{
		if (primeNum[i])
			cout << i << '\n';
	}
}