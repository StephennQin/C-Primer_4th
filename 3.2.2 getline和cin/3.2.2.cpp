#include <iostream>
#include <string>
#include <fstream>
using namespace std;

//////////////////////////////////////////////////////////////////////////
//һ :  ����δ֪��Ŀ��string����
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
//�� :  ��getline��ȡ�����ı�:�����Ի��з�,�������з���ֹͣ����,������
//////////////////////////////////////////////////////////////////////////
/*
int main()
{
	string line;

	//////////////////////////////////////////////////////////////////////////
	//1.cin������
	while (getline(cin, line))			//getline������������,һ������������,һ��string����
	{
		cout << line << endl;
	}


/ *
	//////////////////////////////////////////////////////////////////////////
	//2.ifstream������
	ifstream ifTemp;//ע��f�����ļ�,���Դ˴����ļ�������.


	//2.1 char��ʽ
//	char chFileData[100];
// 	sprintf_s(chFileData, "./Data/example.txt");
// 	ifTemp.open(chFileData);

	//2.1 string��ʽ
	string strFieData = "./Data/example.txt";
	ifTemp.open(strFieData);


	getline(ifTemp, line);
	ifTemp.close();
	cout << line << endl;
* /

	return 0;
}*/