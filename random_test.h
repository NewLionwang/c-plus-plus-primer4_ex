/*************************************************************************
	> File Name: random_test.cpp
	> Author: wangxiaoxian
	> Mail: 634897019@qq.com 
	> Created Time: Thu 23 Jun 2016 12:29:00 AM CST
 ************************************************************************/

#include<iostream>
#include<list>
#include<string>
#include<cstring>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

class Test
{
public:
    long tmpdd;
    int random1();
    int random2();
    long getrid(); 

    Test():tmpdd(randomid())
    {}

    long randomid()
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

        //cout << randid <<"\n";
        long rid = atol(randid);
        return rid;
    }

    string convert(long tmp)
    {
        char randomtmp[7];
        memset(randomtmp,0,7);
        snprintf(randomtmp,7,"%06ld",(int)tmpdd);
        string lastret = randomtmp;
        return randomtmp;
    }
};
