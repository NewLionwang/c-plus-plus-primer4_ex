/*************************************************************************
	> File Name: cin_char_string_4.31.cpp
	> Author: wangxiaoxian
	> Mail: 634897019@qq.com 
	> Created Time: Wed 08 Jun 2016 11:48:25 PM CST
 ************************************************************************/
/*编写程序从标准输入设备读入字符串，并把该串存放在字符数组中。描述你的
 * 程序如何处理可变长的输入。提供比你分配的数组长度长的字符串数据测试你
 * 的程序。
 * */
#include<iostream>
#include<string>
#include<cstring>
using namespace std;
int main()
{
    string in_str;
    const size_t str_size = 10;
    char result_str[str_size + 1];

    cout << "Enter a string(<=" << str_size << " characters):" <<endl;
    getline(cin,in_str);//cin中获取一行string
    size_t len = strlen(in_str.c_str());//strlen不计算\0结束符
    cout << len << endl;

    if(len > str_size)
    {
        len = str_size;
        cout << "输入字符大于10" << endl;
    }
    strncpy(result_str,in_str.c_str(),(len+1));//c_str，会最后append一个\0结束符
    //result_str[len + 1] = '\0';
    cout << result_str << endl;
    return 0;
}
