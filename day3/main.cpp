#include <iostream>

using namespace std;

float Abs(float f)
{
	if (f < 0.0f)
		return -f;
	else
		return f;
}

bool Equal(float f1, float f2, float epsilon)
{
	/*float diff = f1 - f2;
	if (diff < 0.0f)
		diff = -diff;

	return diff <= epsilon;*/
	return Abs(f1 - f2) <= epsilon;

}

int main() 
{
	/*float f1 = 3.0f;
	float f2 = 1.0f + 2.0f;

	float diff = f1 - f2;
	if (diff < 0.0f)
		diff = -diff;*/

	if (Equal(3.0f, 1.0f + 2.0f, 0.00001f))
		cout << "same" << endl;

	return 0;
}