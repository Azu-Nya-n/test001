#include <stdio.h>
#include <iostream>

using namespace std;

int main(void)//引数を取らない関数であることをvoidで宣言
{

	int a = 0;
	int b = 0;
	char mozi = 'A';

	printf("int型の変数ｂに入力します　");
	scanf_s("%d",&b);//scanf_sで変数に値を代入、scanfだとエラー

	printf("moziは %c です\n", mozi);
	printf("bは %d です\n", b);

	while (a != 20)
	{

		cout << "aに任意の整数を入力してください please  "  ;
		cin >> a;
		printf("入力された数値は %d です\n", a);
	}

	if (a == 20)
	{
		cout << "THE END ";
	}

	return 0;//0を返すことによりプログラムを正常に終了させることを表す
}