/*************************************************************************
	> File Name: vector_sum.cpp
	> Author: wangxiaoxian
	> Mail: 634897019@qq.com 
	> Created Time: Thu 16 Jun 2016 12:10:42 AM CST
 ************************************************************************/

#include<iostream>
#include<vector>
using namespace std;
double vecsum(vector<double>::iterator begin,vector<double>::iterator end)
{
    double sum = 0.0;
    while(begin != end)
    {
        sum += *begin++;
    }
    return sum;
}

int main()
{
    double dd;
    vector<double> dvec;
    cout << "Enter double num:" << "\n";
    while(cin >> dd)
        dvec.push_back(dd);
    cout << vecsum(dvec.begin(),dvec.end()) << endl;
}
