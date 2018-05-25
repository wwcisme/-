#include<iostream>
#include<string>
const int maxint = 9999;
const int n = 8;
const int m = 13;
using namespace std;
int matrix[n][n];		//存储景点间距
string name[n];		//景点名称
string inform[n];		//景点介绍
//主菜单
void menu()
{
	cout << "--------------------------" << endl;
	cout << "     (1)景点介绍 "<<endl;
	cout << "     (2)线路查询 " << endl;
	cout << "     (0)退    出 " << endl;
	cout << "--------------------------" << endl;
}
//景点间距
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
//景点信息
void information()
{
	name[0] = "大  门";
	name[1] = "滨江楼";
	name[2] = "文德楼";
	name[3] = "尚贤楼";
	name[4] = "藕舫园";
	name[5] = "沁  园";
	name[6] = "长望塔";
	name[7] = "明德楼";
	inform[0] = "公园大门。";
	inform[1] = "公园滨江楼。";
	inform[2] = "公园文德楼。";
	inform[3] = "公园尚贤楼。";
	inform[4] = "公园藕舫园。";
	inform[5] = "公园沁园。";
	inform[6] = "公园长望塔。";
	inform[7] = "公园明德楼。";
}
//景点显示
void display()
{
	for (int i = 1; i < n; i++)
		cout << '(' << i << ')' << name[i] << endl;
}
//景点信息查询
void findinfo(int x)
{
	if (x > 7 || x < 0)
		cout << "请重新输入" << endl;
	cout <<name[x]<< ':' << endl;
	cout << inform[x] << endl;
}