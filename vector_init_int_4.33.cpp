/*************************************************************************
	> File Name: vector_init_int_4.33.cpp
	> Author: wangxiaoxian
	> Mail: 634897019@qq.com 
	> Created Time: Thu 09 Jun 2016 01:35:20 AM CST
 ************************************************************************/
//编写程序把int 型vector 复制给int 型数组。
#include<iostream>
#include<vector>
#include<cstddef>
using namespace std;
int main()
{
    vector<int> ivec;
    int ival;
    cout << "Enter numbers:(ctrl +d to end)" << endl;
    while(cin >> ival)
        ivec.push_back(ival);

    int *parr = new int[ivec.size()];
    size_t ix = 0;
    for(vector<int>::iterator iter = ivec.begin();
            iter != ivec.end();++iter, ++ix)
    {
        parr[ix] = *iter;
        cout << parr[ix] << " " << endl;
    }
    delete [] parr;
   // const size_t int_size = ivec.size();
   // int int_arr[int_size];

   // for(int i = 0;i < int_size; i++)
   // {
   //     int_arr[i] = ivec[i];
   //     cout << int_arr[i] << endl;
   // }
    return 0;
}
