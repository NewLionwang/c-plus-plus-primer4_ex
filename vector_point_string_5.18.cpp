/*************************************************************************
	> File Name: vector_point_string_5.18.cpp
	> Author: wangxiaoxian
	> Mail: 634897019@qq.com 
	> Created Time: Mon 13 Jun 2016 07:05:05 PM CST
 ************************************************************************/
/*编写程序定义一个 vector 对象，其每个元素都是指向
 * string 类型的指针，读取该 vector 对象，输出每个
 * string 的内容及其相应的长度。
 * */
#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main()
{
    vector <string *> svec;
    string str;
    cout << "Enter some strings(Ctrl + D to end)" << endl;
    while(cin >> str)
    {
        string *ptr = new string;
        *ptr = str;
        svec.push_back(ptr);
    }
    vector <string*>::iterator iter = svec.begin();
    while(iter != svec.end())
    {
        cout << **iter << " " << (**iter).size() << endl;
        iter++;
    }
    //释放动态分配的string对象
    iter = svec.begin();
    while(iter != svec.end())
    {
        delete *iter;
        iter++;
    }
    return 0;
}
