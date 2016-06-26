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

using namespace std;

class Test
{
public:
    int random1();
    int random2();

    long int randomid()
    {
        char randid[7];//MMSSXY
        memset(randid, 0, 7);

        time_t  timer;
        struct tm   *tblock;
        timer = time( 0 );
        tblock = localtime( &timer );
        char mmss[5];
        memset(mmss, 0, 5);
        snprintf(mmss, 5 , "%02d%02d", (int)tblock->tm_min, (int)tblock->tm_sec);
        long int rand = random()%100;
        snprintf(randid,7,"%s%02d",mmss,(int)rand);

        long rid = atol(randid);
        return ++rid;
    }
};
