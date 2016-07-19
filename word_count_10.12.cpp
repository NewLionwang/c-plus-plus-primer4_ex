/*************************************************************************
	> File Name: word_count_10.12.cpp
	> Author: wangxiaoxian
	> Mail: 634897019@qq.com 
	> Created Time: Wed 20 Jul 2016 12:28:09 AM CST
 ************************************************************************/

#include<iostream>
#include<string>
#include<map>
using namespace std;

int main()
{
    map<string, int> word_count;
    string word;
    cout << "input you word for count:\n" << endl;
    while(cin >> word)
    {
        pair<map<string,int>::iterator, bool> ret = 
            word_count.insert(make_pair(word, 1));
        if(!ret.second) //插入操作没有做，说明该关键字早已经存在，只需要将其对应的值+1
            ++ret.first->second;
    }
    map<string, int>::iterator map_it = word_count.begin();
    while(map_it != word_count.end())
    {
        cout << map_it->first << " cout: "
            << map_it->second << endl;
        ++map_it;
    }
}
