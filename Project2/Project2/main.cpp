#include <stdio.h>
#include <iostream>

using namespace std;

int main(void)//���������Ȃ��֐��ł��邱�Ƃ�void�Ő錾
{

	int a = 0;
	int b = 0;
	int num;
	char mozi = 'A';

	printf("int�^�̕ϐ�����\t���͂��܂��@");//\t�Ń^�u��}��
	scanf_s("%d", &b);//scanf_s�ŕϐ��ɒl�����Ascanf���ƃG���[

	cout << "�ϐ�mozi�ɐݒ肳��Ă��镶����\�������܂��B����\�������܂����H" << endl;
	cin >> num;

	for (int i = 0; i < num; i++)
	{
		cout << i+1 << "���" ;
		printf("mozi��\t%c �ł�\n", mozi);
	}

	if (b == 10)
	{
		printf("b��10�ł�");
	}
	else
	{
		printf("b��10�ł͂Ȃ� %d �ł�\n", b);
	}


	while (a != 20)
	{

		cout << "a�ɔC�ӂ̐�������͂��Ă������� please  ";
		cin >> a;
		printf("���͂��ꂽ���l�� %d �ł�\n", a);
	}

	if (a == 20)
	{
		cout << "THE END " << endl;
	}

	cout << "��������Switch���ɂ�镪��ɓ���܂��B\t���l����͂��Ă��������A���̔ԍ��̐��k�̖��O��\�����܂��B" << endl;
	int no = NULL;

	//Switch���͐����l�ł������f�ł��Ȃ��B�����y�A�ϐ��y�я������͎g�p�s��
	while (no != 20)
	{

		cout << "�o�Ȕԍ� = ";
		scanf_s("%d", &no);

		switch (no) {
		case 1:
			printf("���̂ё�\n");
			break;
		case 2:
			printf("���Í�\n");
			break;
		case 3:
			printf("���c��\n");
			break;
		case 4:
			printf("����X�l�v\n");
			break;
		case 5:
		case 6:
		case 8:	//case�͂����܂ł����̏����ɔ�Ԃ��߂̂��̂�����break�����ɑ����ď����Ƃ��̒��g�����ׂĎ��s�����B
			cout << "�ԍ�5,6,8�����͂���܂���\t���̐l�̓��u�ł�" << endl;
			break;
		case 7:
			cout << "7" << endl;
			break;
		default:	//default��case�ɓ��Ă͂܂�Ȃ��ꍇ�Ɏ��s�����
			printf("����Ȕԍ��̐l�͂��Ȃ�\n");
			break;
		}
	}

	return 0;//0��Ԃ����Ƃɂ��v���O�����𐳏�ɏI�������邱�Ƃ�\��
}