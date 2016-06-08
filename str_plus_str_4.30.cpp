/*************************************************************************
	> File Name: str_plus_str_4.30.cpp
	> Author: wangxiaoxian
	> Mail: 634897019@qq.com 
	> Created Time: Wed 08 Jun 2016 10:11:01 PM CST
 ************************************************************************/

#include<iostream>
#include<string>
#include<cstring>
#include<cstddef>
using namespace std;
int main()
{
    const char *st1 = "lilei and hanmeimei ";
    const char *st2 = "are friends.";
    size_t len = strlen(st1) + strlen(st2);
    //cout << len << endl;
    char *result_st = new char[len + 1];
    strcpy(result_st, st1);
    strcat(result_st, st2);
    cout << result_st << endl;
    delete [] result_st;
    
    const string str1("mary and lilei ");
    const string str2("are friends.");
    string result_str;
    result_str = str1;
    result_str += str2;
    cout << result_str << endl;

    return 0;
}

