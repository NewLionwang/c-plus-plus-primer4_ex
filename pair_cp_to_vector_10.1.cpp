/*************************************************************************
	> File Name: pair_cp_to_vector_10.1.cpp
	> Author: wangxiaoxian
	> Mail: 634897019@qq.com 
	> Created Time: Wed 06 Jul 2016 10:07:51 PM CST
 ************************************************************************/

#include<iostream>
#include<string>
#include<vector>
#include<utility>
using namespace std;

int main()
{
    vector<pair<string, int> > pairvec;
    pair<string, int> word_count;
    string first;
    int last;
    while(cin >> first >> last)
    {
        word_count = make_pair(first, last);
        pairvec.push_back(word_count);
    }
    for(vector<pair<string, int> >::iterator it = pairvec.begin();it != pairvec.end();++it)
    {
        cout << it->first << "\t" << it->second << "\n" << endl;
    }
}

