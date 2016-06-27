/*************************************************************************
	> File Name: sum_arr_7.13.cpp
	> Author: wangxiaoxian
	> Mail: 634897019@qq.com 
	> Created Time: Wed 15 Jun 2016 09:47:45 PM CST
 ************************************************************************/

#include<iostream>
#include<cstddef>
using namespace std;
//sum1 sum2 的方式是一样的
int sum1(const int *arr, size_t size)
{
    int sum = 0;
    for(size_t i = 0; i != size; ++i)
    {
        sum += arr[i];
    }
    return sum;
}

int sum2(const int arr[], size_t size)
{
    int sum = 0;
    for(size_t i = 0; i != size; ++i)
    {
        sum += arr[i];
    }
    return sum;
}

//STL风格
int sum3(const int *beg, const int *end)
{
    int sum = 0;
    while(beg != end)
        sum += *beg++;
    return sum;
}
//引用风格，注意括号是必须的
int sum4(int (&arr)[5])
{
    int sum = 0;
    for(size_t i = 0; i != 5; ++i)
    {
        sum += arr[i];
    }
    return sum;
}
int main()
{
    int i[] = {1,2,3,4,5};
    cout << sum1(i, sizeof(i)/sizeof(*i)) << endl;
    cout << sum2(i, sizeof(i)/sizeof(*i)) << endl;
    cout << sum3(i, (i+sizeof(i)/sizeof(*i))) << endl;
    cout << sum4(i) << endl;
    return 0;
}
