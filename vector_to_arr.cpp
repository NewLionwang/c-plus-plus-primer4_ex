/*************************************************************************
	> File Name: vector_to_arr.cpp
	> Author: wangxiaoxian
	> Mail: 634897019@qq.com 
	> Created Time: Wed 08 Jun 2016 06:49:29 PM CST
 ************************************************************************/

#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> ivec;
    int ival;
    cout << "Enter numbers:(ctrl+d to end)" << endl;
    while(cin >> ival)
        ivec.push_back(ival);
    int *pia  = new int[ivec.size()];

    int *tp = pia;
    for(vector<int>::iterator iter = ivec.begin();
            iter != ivec.end(); ++iter,++tp)
    {
        *tp = *iter;
        cout << *tp << " " << endl;
    }
    delete [] pia;
    return 0;
}
