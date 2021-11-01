#include <iostream>

using namespace std; 

int main()
{
	int i , j , max;
	cout << "enter two number :" << endl;
	cin >> j >> i;

	if (i > j)
		max = i;
	else
		max = j;

	while (1)
	{
		if (max % i == 0 && max % j == 0)
			break;
		else
			max++;
	}

	cout << "k.m.m : " << max << endl;

	system("pause");
	return 0;
}