#include<iostream>
#include<string>
const int maxint = 9999;
const int n = 8;
const int m = 13;
using namespace std;
int matrix[n][n];		//�洢������
string name[n];		//��������
string inform[n];		//�������
//���˵�
void menu()
{
	cout << "--------------------------" << endl;
	cout << "     (1)������� "<<endl;
	cout << "     (2)��·��ѯ " << endl;
	cout << "     (0)��    �� " << endl;
	cout << "--------------------------" << endl;
}
//������
void map()
{
	matrix[0][1] = 4;
	matrix[0][2] = 5;
	matrix[1][7] = 6;
	matrix[1][5] = 5;
	matrix[2][3] = 4;
	matrix[2][4] = 7;
	matrix[2][5] = 3;
	matrix[3][4] = 4;
	matrix[4][5] = 6;
	matrix[4][6] = 7;
	matrix[5][6] = 6;
	matrix[5][7] = 4;
	matrix[6][7] = 5;
}
//������Ϣ
void information()
{
	name[0] = "��  ��";
	name[1] = "����¥";
	name[2] = "�ĵ�¥";
	name[3] = "����¥";
	name[4] = "ź��԰";
	name[5] = "��  ԰";
	name[6] = "������";
	name[7] = "����¥";
	inform[0] = "��԰���š�";
	inform[1] = "��԰����¥��";
	inform[2] = "��԰�ĵ�¥��";
	inform[3] = "��԰����¥��";
	inform[4] = "��԰ź��԰��";
	inform[5] = "��԰��԰��";
	inform[6] = "��԰��������";
	inform[7] = "��԰����¥��";
}
//������ʾ
void display()
{
	for (int i = 1; i < n; i++)
		cout << '(' << i << ')' << name[i] << endl;
}
//������Ϣ��ѯ
void findinfo(int x)
{
	if (x > 7 || x < 0)
		cout << "����������" << endl;
	cout <<name[x]<< ':' << endl;
	cout << inform[x] << endl;
}