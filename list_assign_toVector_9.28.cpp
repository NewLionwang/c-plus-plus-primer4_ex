/*************************************************************************
	> File Name: vector_assign.cpp
	> Author: wangxiaoxian
	> Mail: 634897019@qq.com 
	> Created Time: Tue 05 Jul 2016 09:44:21 PM CST
 ************************************************************************/

#include<iostream>
#include<vector>
#include<list>
using namespace std;

int main()
{
    list<const char *>oldstyle;
    char *c_arr[] = {"one","two","three"};
    oldstyle.assign(c_arr,c_arr+3);
    vector<string> svec;
    //list<const char*>::iterator it = oldstyle.begin();
    svec.assign(oldstyle.begin(), oldstyle.end());
    for(vector<string>::iterator iter = svec.begin();iter != svec.end();++iter)
    {
        cout << *iter << "\n" << endl;
    }
}

