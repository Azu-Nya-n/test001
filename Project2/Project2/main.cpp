#include <stdio.h>
#include <iostream>

using namespace std;

int main(void)//���������Ȃ��֐��ł��邱�Ƃ�void�Ő錾
{

	int a = 0;
	int b = 0;
	char mozi = 'A';

	printf("int�^�̕ϐ����ɓ��͂��܂��@");
	scanf_s("%d",&b);//scanf_s�ŕϐ��ɒl�����Ascanf���ƃG���[

	printf("mozi�� %c �ł�\n", mozi);
	printf("b�� %d �ł�\n", b);

	while (a != 20)
	{

		cout << "�C�ӂ̐�������͂��Ă������� please  "  ;
		cin >> a;
		printf("���͂��ꂽ���l�� %d �ł�\n", a);
	}

	if (a == 20)
	{
		cout << "THE END ";
	}

	return 0;//0��Ԃ����Ƃɂ��v���O�����𐳏�ɏI�������邱�Ƃ�\��
}