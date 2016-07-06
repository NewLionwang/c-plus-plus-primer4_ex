/*************************************************************************
	> File Name: string_toupper_9.34.cpp
	> Author: wangxiaoxian
	> Mail: 634897019@qq.com 
	> Created Time: Tue 05 Jul 2016 10:38:59 PM CST
 ************************************************************************/

#include<iostream>
#include<string>
using namespace std;

int main()
{
    string str;
    cout << "Input string:\t";
    getline(cin, str);
    cout << "\n Original str:\t" << str << endl;
    for(string::iterator it = str.begin();it!=str.end();++it)
    {
        *it = toupper(*it);
    }
    cout << "\n Toupper,the str:\t" << str << endl;
    return 0;
}

