/*************************************************************************
	> File Name: main_sum_7.15.cpp
	> Author: wangxiaoxian
	> Mail: 634897019@qq.com 
	> Created Time: Thu 16 Jun 2016 12:54:09 AM CST
 ************************************************************************/

#include<iostream>
using namespace std;
int main(int argc, char **argv)
{
    if(argc!=3)
    {
        cout << "you should use three arguments" << endl;
        return -1;
    }
    cout << atof(argv[1])+atof(argv[2]) << endl;
    return 0;
}
