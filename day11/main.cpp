#include <iostream>

using namespace std;

//M�̻� N������ �Ҽ��� ��� ���
int main()
{
	bool primeNum[1000001];//�Ҽ��̸� true �ƴϸ� false
	int M, N;
	cin >> M >> N;
	for (int i = M; i <= N; i++) {
		primeNum[i] = true;
	}

	primeNum[1] = false;//1�� �Ҽ��� �ƴϹǷ�
	for (int i = 2; i < N; i++)//2���� �����ؼ�
	{
		for (int j = 2 * i; j <= N; j = j + i)//�� ������� �Ҽ��� �ƴϹǷ�
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