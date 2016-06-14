/*************************************************************************
	> File Name: func_7.6.cpp
	> Author: wangxiaoxian
	> Mail: 634897019@qq.com 
	> Created Time: Wed 15 Jun 2016 12:08:36 AM CST
 ************************************************************************/

#include<iostream>
using namespace std;

void exchange(int *a, int *b)
{
    //交换了指针指向的内容
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

int main()
{
    int i = 1;
    int j = 2;
    int *p = &i;
    int *q = &j;
    cout << "Befor exchange" << "\n";
    cout << *p << "\n"
        << *q << endl;
    exchange(p,q);
    cout << "After exchange" << "\n";
    cout << *p << "\n"
        << *q << endl;
    return 0;
}
