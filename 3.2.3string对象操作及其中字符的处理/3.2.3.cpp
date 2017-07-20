#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
	//////////////////////////////////////////////////////////////////////////
	//习题3.7
	//////////////////////////////////////////////////////////////////////////
/*
	while (1)
	{
		string str1, str2;
		cout << "请输入两个字符串,中间以换行隔开:" << endl;
		cin >> str1 >> str2;
		if (str1 == str2)
		{
			cout << "两个字符串相等" << endl;
		}
		else
		{
			cout << "两个字符串不相等" << endl;
			cout << "更大的字符串是" << (str1 > str2 ? str1 : str2) << endl << endl;
		}
		if (str1.size() == str2.size())
		{
			cout << "两个字符串长度相等" << endl;
		}
		else
		{
			cout << "两个字符串长度不相等" << endl;
			cout << "更长的字符串是" << (str1.size() > str2.size() ? str1 : str2) << endl;//?前面的类型可以和后面的不同,这个运算符很好用.
		}
	}
*/


	//////////////////////////////////////////////////////////////////////////
	//习题3.8
	//////////////////////////////////////////////////////////////////////////
/*
// 	while (1)
	{
		vector<string> vecStr;
		string str,strAppend;
		int nLength = 3;
		//while (cin >> str)//采用这种方式,换行当做是输入,所以起不到结束输入的效果.
		cout << "请输入3个字符串: " << endl;
		for(int i = 0; i < nLength; i++)
		{
			cin >> str;
			vecStr.push_back(str);
		}
		for (vector<int>::size_type i = 0; i != vecStr.size(); ++i)
		{
			strAppend += vecStr[i];
		}
		cout << "连接后的字符串为: " << strAppend << endl;

		strAppend = "";
		for (vector<int>::size_type i = 0; i != vecStr.size(); ++i)
		{
			strAppend = strAppend + " " + vecStr[i] ;
		}
		cout << "加完空格的字符串为: " << strAppend << endl;

	}
*/

	//////////////////////////////////////////////////////////////////////////
	//习题3.10
	//////////////////////////////////////////////////////////////////////////

	string str,strTemp = "";
	cout << "输入带标点符号的字符串:" << endl;
	cin >> str;

/*
	//这种方法不能用
	for (string::size_type i = 0; i != str.size(); ++i)
	{
		if (ispunct(str[i]))
		{
			str[i] = '';//这种方法不能用.提醒带引号的字符串应至少包含一个字符.
		}
	}
*/



    //这种方法可以
	for (string::size_type i = 0; i != str.size(); ++i)
	{
		if (ispunct(str[i]))
		{
		}
		else
			strTemp += str[i];
	}

	cout << "去掉标点符号的字符串:" << strTemp << endl;
	return 0;
}