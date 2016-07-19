/*************************************************************************
	> File Name: map_count_10.9.cpp
	> Author: wangxiaoxian
	> Mail: 634897019@qq.com 
	> Created Time: Tue 19 Jul 2016 11:32:11 PM CST
 ************************************************************************/
/*序统计并输出所读入的单词出现的次数*/

#include<iostream>
#include<map>
#include<string>
using namespace std;

int main()
{
    map<string, int> word_count;
    string word;
    cout << "input your word to count:";
    while(cin >> word)
        ++word_count[word];
    map<string, int>::iterator map_it = word_count.begin();
    while(map_it != word_count.end())
    {
        cout << map_it->first << " cout: "
            << map_it->second << endl;
        ++map_it;
    }
}
