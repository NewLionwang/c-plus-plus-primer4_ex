/*************************************************************************
	> File Name: count_string_6.12.cpp
	> Author: wangxiaoxian
	> Mail: 634897019@qq.com 
	> Created Time: Tue 14 Jun 2016 09:35:56 PM CST
 ************************************************************************/

#include<iostream>
#include<string>
using namespace std;

int main()
{
    string prestr,str,retstr; //pre input and input string
    int cnt = 0,retcnt = 0; //count the continuous repetition of words
    while(cin >> str) //ctrl+D to end
    {
       if (prestr == str)
           ++cnt;
       else
       {
           prestr = str;
           cnt = 1;
       }
       if(cnt >= retcnt)
       {
           retcnt = cnt;
           retstr = str;
       }
    }
    if(retcnt > 1)
        cout << retstr << "最大连续重复次数："
            << retcnt << endl;
    else
        cout << "没有连续重复的string输入" << endl;
}

