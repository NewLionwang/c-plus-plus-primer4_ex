/*************************************************************************
	> File Name: bigger_5.20.cpp
	> Author: wangxiaoxian
	> Mail: 634897019@qq.com 
	> Created Time: Tue 14 Jun 2016 05:17:20 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;
int main()
{
    int i,j;
    cout << "Enter two integers:" << endl;
    cin >> i >> j;
    cout << "The bigger one is:"
        <<(i > j ? i : j) << endl;
    return 0;
}
