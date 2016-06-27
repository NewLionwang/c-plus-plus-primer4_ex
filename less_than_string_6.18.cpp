/*************************************************************************
	> File Name: less_than_string_6.18.cpp
	> Author: wangxiaoxian
	> Mail: 634897019@qq.com 
	> Created Time: Tue 14 Jun 2016 10:46:11 PM CST
 ************************************************************************/

#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str1, str2, str3;
    do
    {
        cout << "Enter two string:\n" << endl;
        getline(cin,str1);
        getline(cin,str2);
        cout << "the " << (str1 < str2 ? str1 : str2)
            <<" is less than " << (str1 < str2 ? str2 : str1)
            << endl;
        cout << "Countinue?(Y or N?)" << endl;
        cin >> str3;
    }while(str3[0] == 'Y' || str3[0] == 'y');
    return 0;
}
