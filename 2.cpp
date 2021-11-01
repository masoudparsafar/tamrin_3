#include <iostream> 

using namespace std; 

void factorial(int n)
{
	int i=1, j; 
	for (j = 1;; j++)
	{
		if (i == n)
		{
			cout << "yes"<< endl;
			break;
		}
		else 
		{
			if (i < n)
			{
				i = i *j;
			}
			else
			{
				cout << "no"<<endl;
				break;
			}
		}
	}
}

int main()
{
	int num;

	cout << "enter the number :" << endl;
	cin >> num;

	factorial(num);

	system("pause");
	return 0;
}