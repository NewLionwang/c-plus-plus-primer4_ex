/*************************************************************************
	> File Name: int_init_vector.4.32.cpp
	> Author: wangxiaoxian
	> Mail: 634897019@qq.com 
	> Created Time: Thu 09 Jun 2016 12:59:48 AM CST
 ************************************************************************/
//编写程序用int 型数组初始化vector 对象。
#include<iostream>
#include<vector>
#include<cstddef>
using namespace std;
int main()
{
    const size_t int_size = 6;
    int int_arr[int_size] = {0,1,2,3,4,5};
    vector<int> ivec(int_arr, int_arr + int_size);

    for(vector<int>::iterator iter = ivec.begin(); iter != ivec.end(); ++iter)
        cout << *iter << endl;        
    return 0;
}
