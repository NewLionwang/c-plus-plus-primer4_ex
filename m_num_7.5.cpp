/*************************************************************************
	> File Name: m_num_7.5.cpp
	> Author: wangxiaoxian
	> Mail: 634897019@qq.com 
	> Created Time: Wed 15 Jun 2016 12:03:26 AM CST
 ************************************************************************/

#include<iostream>
using namespace std;

int max(int a,int *b)
{
    return (a>*b?a:*b);
}

int main()
{
    int a = 8;
    int i = 10;
    int *b = &i;
    cout << "the max num :" << max(a,b) << endl;
    return 0;
}
