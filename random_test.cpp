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
//#include"random_test.h"
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
    Test::tmpdd = randomid();
    return Test::tmpdd;
}

long Test::getrid() 
{
    long rid = Test::tmpdd;
    return rid; 
}

int main()
{
    srandom(getpid()); 
    Test test[10];
    Test test1;

    for(int i = 0;i < 3; i++){
            //cout << test[i].tmpdd<< "\n";
            //cout << test[i].tmprnd(test[i].tmpdd)<< "\n";
        for(int j = 0;j<3;j++)
        {
            long tt = test[i].tmpdd++;
            cout << test[i].convert(tt) << "\n";
            //cout << test[i].tmprnd(test[i].tmpdd)<< "\n";
        }
    cout << "\n" << endl;
    }

    for (int i = 0;i < 10;++i)
    {    
    //static long rid = test[i].random2();
    //static long rid = test[i].tmpdd;
    cout << test[i].tmpdd << "\n";
    //long tmpid = ++rid;
    //char randomid[7];
    //memset(randomid,0,7);
    //snprintf(randomid,7,"%06ld",tmpid);
    //cout << randomid << endl;
    }
    cout << "\n" << endl;

    //for (int i = 0;i < 10;++i)
    //    cout << test1.random1() << endl;
    //cout << "\n" << endl;
    //for (int i = 0;i < 10;++i)
    //    cout << test1.random2() << endl;
}
