/*************************************************************************
	> File Name: arr_0.cpp
	> Author: wangxiaoxian
	> Mail: 634897019@qq.com 
	> Created Time: Tue 07 Jun 2016 01:27:41 AM CST
 ************************************************************************/

#include<iostream>
#include<cstddef>
using namespace std;
int main()
{
    const size_t arr_size = 8;
    int int_arr[arr_size] = {0,1,2,3,4,5,6,7};
    for (int *pbegin = int_arr, *pend = int_arr + arr_size; pbegin!=pend;
            pbegin++)
    {
        *pbegin = 0;
        cout << *pbegin << ' ';
    }
    return 0;
}

