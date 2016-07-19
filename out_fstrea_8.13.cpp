/*************************************************************************
	> File Name: out_fstrea_8.13.cpp
	> Author: wangxiaoxian
	> Mail: 634897019@qq.com 
	> Created Time: Tue 19 Jul 2016 12:44:07 AM CST
 ************************************************************************/

#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main()
{
    cout << "input name of file you want to open:\n";
    string fname;
    cin >> fname;
    fstream fopen;
    fopen.clear();
    fopen.open(fname.c_str());
    if(!fopen)
    {
        cerr << "can't open the file given!." << endl;
        return -1;
    }
    string s;
    while(fopen >> s)
    {
        cout << s << " ";
    }
    fopen.close();
    return 0;
}
