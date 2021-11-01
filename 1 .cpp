#include <iostream>

using namespace std; 

int main()
{
	int m, n, i, j; 
	cout << "enter m and n :" << endl; 
	cin >> m >> n; 

	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= m; j++)
		{
			if (i % 2 == 0)
			{
				if (j % 2 == 0)
				{
					cout << " * ";
				}
				else
				{
					cout << " # ";
				}
			}
			else 
			{
				if (j % 2 == 0)
				{
					cout << " # ";
				}
				else
				{
					cout << " * ";
				}
			}
		} //end for (m)
		cout << endl;
	} //end for (n)

	system("pause");
	return 0;
}