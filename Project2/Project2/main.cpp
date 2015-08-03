#include <stdio.h>
#include <iostream>

using namespace std;

int main(void)//引数を取らない関数であることをvoidで宣言
{

	int a = 0;
	int b = 0;
	int num;
	char mozi = 'A';

	printf("int型の変数ｂに\t入力します　");//\tでタブを挿入
	scanf_s("%d", &b);//scanf_sで変数に値を代入、scanfだとエラー

	cout << "変数moziに設定されている文字を表示させます。何回表示させますか？" << endl;
	cin >> num;

	for (int i = 0; i < num; i++)
	{
		cout << i+1 << "回目" ;
		printf("moziは\t%c です\n", mozi);
	}

	if (b == 10)
	{
		printf("bは10です");
	}
	else
	{
		printf("bは10ではなく %d です\n", b);
	}


	while (a != 20)
	{

		cout << "aに任意の整数を入力してください please  ";
		cin >> a;
		printf("入力された数値は %d です\n", a);
	}

	if (a == 20)
	{
		cout << "THE END " << endl;
	}

	cout << "ここからSwitch文による分岐に入ります。\t数値を入力してください、その番号の生徒の名前を表示します。" << endl;
	int no = NULL;

	//Switch文は整数値でしか判断できない。実数及、変数及び条件式は使用不可
	while (no != 20)
	{

		cout << "出席番号 = ";
		scanf_s("%d", &no);

		switch (no) {
		case 1:
			printf("野比のび太\n");
			break;
		case 2:
			printf("源静香\n");
			break;
		case 3:
			printf("剛田武\n");
			break;
		case 4:
			printf("骨川スネ夫\n");
			break;
		case 5:
		case 6:
		case 8:	//caseはあくまでそこの処理に飛ぶためのものだからbreakせずに続けて書くとその中身がすべて実行される。
			cout << "番号5,6,8が入力されました\tその人はモブです" << endl;
			break;
		case 7:
			cout << "7" << endl;
			break;
		default:	//defaultはcaseに当てはまらない場合に実行される
			printf("そんな番号の人はいない\n");
			break;
		}
	}

	return 0;//0を返すことによりプログラムを正常に終了させることを表す
}