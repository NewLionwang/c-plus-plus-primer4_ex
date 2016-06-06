/*************************************************************************
	> File Name: arr.cpp
	> Author: wangxiaoxian
	> Mail: 634897019@qq.com 
	> Created Time: Tue 07 Jun 2016 01:18:38 AM CST
 ************************************************************************/

#include<iostream>
#include<cstddef>
using namespace std;

int main()
{
    const size_t arr_sz = 5;
    int int_arr[arr_sz] = {0,1,2,3,4};
    for (int *pbegin = int_arr, *pend = int_arr + arr_sz;
            pbegin != pend; ++pbegin)
        cout << *pbegin << ' ';
    return 0;
}
