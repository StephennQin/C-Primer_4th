#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
	//////////////////////////////////////////////////////////////////////////
	//ϰ��3.7
	//////////////////////////////////////////////////////////////////////////
/*
	while (1)
	{
		string str1, str2;
		cout << "�����������ַ���,�м��Ի��и���:" << endl;
		cin >> str1 >> str2;
		if (str1 == str2)
		{
			cout << "�����ַ������" << endl;
		}
		else
		{
			cout << "�����ַ��������" << endl;
			cout << "������ַ�����" << (str1 > str2 ? str1 : str2) << endl << endl;
		}
		if (str1.size() == str2.size())
		{
			cout << "�����ַ����������" << endl;
		}
		else
		{
			cout << "�����ַ������Ȳ����" << endl;
			cout << "�������ַ�����" << (str1.size() > str2.size() ? str1 : str2) << endl;//?ǰ������Ϳ��Ժͺ���Ĳ�ͬ,���������ܺ���.
		}
	}
*/


	//////////////////////////////////////////////////////////////////////////
	//ϰ��3.8
	//////////////////////////////////////////////////////////////////////////
/*
// 	while (1)
	{
		vector<string> vecStr;
		string str,strAppend;
		int nLength = 3;
		//while (cin >> str)//�������ַ�ʽ,���е���������,�����𲻵����������Ч��.
		cout << "������3���ַ���: " << endl;
		for(int i = 0; i < nLength; i++)
		{
			cin >> str;
			vecStr.push_back(str);
		}
		for (vector<int>::size_type i = 0; i != vecStr.size(); ++i)
		{
			strAppend += vecStr[i];
		}
		cout << "���Ӻ���ַ���Ϊ: " << strAppend << endl;

		strAppend = "";
		for (vector<int>::size_type i = 0; i != vecStr.size(); ++i)
		{
			strAppend = strAppend + " " + vecStr[i] ;
		}
		cout << "����ո���ַ���Ϊ: " << strAppend << endl;

	}
*/

	//////////////////////////////////////////////////////////////////////////
	//ϰ��3.10
	//////////////////////////////////////////////////////////////////////////

	string str,strTemp = "";
	cout << "����������ŵ��ַ���:" << endl;
	cin >> str;

/*
	//���ַ���������
	for (string::size_type i = 0; i != str.size(); ++i)
	{
		if (ispunct(str[i]))
		{
			str[i] = '';//���ַ���������.���Ѵ����ŵ��ַ���Ӧ���ٰ���һ���ַ�.
		}
	}
*/



    //���ַ�������
	for (string::size_type i = 0; i != str.size(); ++i)
	{
		if (ispunct(str[i]))
		{
		}
		else
			strTemp += str[i];
	}

	cout << "ȥ�������ŵ��ַ���:" << strTemp << endl;
	return 0;
}