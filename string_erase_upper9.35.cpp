/*************************************************************************
	> File Name: string_erase_upper9.35.cpp
	> Author: wangxiaoxian
	> Mail: 634897019@qq.com 
	> Created Time: Tue 05 Jul 2016 10:52:28 PM CST
 ************************************************************************/

#include<iostream>
#include<string>
using namespace std;

int main()
{
    string str;
    cout << "Input string:\t";
    getline(cin, str);
    cout << "\n Original string:\t" << str << endl;
    for(string::iterator it = str.begin();it != str.end(); ++it)
    {
        if(isupper(*it))
        {    
            str.erase(it);
            it--;
        }
    }
    cout << "\n after erase,the string:\t" << str <<endl;
}

