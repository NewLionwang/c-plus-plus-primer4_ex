/*************************************************************************
	> File Name: random_test.cpp
	> Author: wangxiaoxian
	> Mail: 634897019@qq.com 
	> Created Time: Thu 23 Jun 2016 12:29:00 AM CST
 ************************************************************************/

#include<iostream>
#include<string>
#include<cstring>
#include<stdio.h>
#include<stdlib.h>
#include"random_test.h"
#include<unistd.h>

using namespace std;


int Test::random1()
{
    static long rid = randomid();
    return ++rid;
}

int Test::random2()
{
    static long rid = randomid();
    return ++rid;
}

int main()
{
    srandom(getpid()); 
    Test test1;
    Test test2;
    for (int i = 0;i < 10;++i)
        cout << test1.random1() << endl;
    cout << "\n" << endl;
    for (int i = 0;i < 10;++i)
        cout << test1.random2() << endl;
}
