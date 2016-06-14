/*************************************************************************
	> File Name: debug.cpp
	> Author: wangxiaoxian
	> Mail: 634897019@qq.com 
	> Created Time: Tue 14 Jun 2016 11:29:08 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;
int main()
{
#ifndef NDEBUG
    cerr << "starting main" << endl;
#endif
    string word;
    cin >> word;
    const int threshold = 10;
    if(word.size() < threshold)
        cerr << "ERROR: " << __FILE__
             << ":line " << __LINE__ << endl
             << "   Compiled on " << __DATE__
             << "at " << __TIME__ << endl
             << "   Word read was " << word
             << ":Length too short" << endl;
}
