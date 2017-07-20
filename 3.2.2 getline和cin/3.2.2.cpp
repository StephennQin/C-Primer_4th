#include <iostream>
#include <string>
#include <fstream>
using namespace std;

//////////////////////////////////////////////////////////////////////////
//一 :  读入未知数目的string对象
//////////////////////////////////////////////////////////////////////////
int main()
{
	string word;
	while (cin >> word)
	{
		cout << word << endl;
	}
	return 0;
}


//////////////////////////////////////////////////////////////////////////
//二 :  用getline读取整行文本:不忽略换行符,遇到换行符就停止读入,并返回
//////////////////////////////////////////////////////////////////////////
/*
int main()
{
	string line;

	//////////////////////////////////////////////////////////////////////////
	//1.cin的例子
	while (getline(cin, line))			//getline接受两个参数,一个输入流对象,一个string对象
	{
		cout << line << endl;
	}


/ *
	//////////////////////////////////////////////////////////////////////////
	//2.ifstream的例子
	ifstream ifTemp;//注意f代表文件,所以此处是文件输入流.


	//2.1 char方式
//	char chFileData[100];
// 	sprintf_s(chFileData, "./Data/example.txt");
// 	ifTemp.open(chFileData);

	//2.1 string方式
	string strFieData = "./Data/example.txt";
	ifTemp.open(strFieData);


	getline(ifTemp, line);
	ifTemp.close();
	cout << line << endl;
* /

	return 0;
}*/