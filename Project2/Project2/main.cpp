#include<iostream>

using namespace std;

int main()
{

	int a = 0;

	while (a != 20)
	{
		cout << "任意の整数を入力してください"  ;
		cin >> a;
		cout << a << endl;
	}

	if (a == 20)
	{
		cout << "THE END ";
	}

	return 0;
}