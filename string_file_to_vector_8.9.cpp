/*************************************************************************
	> File Name: string_file_to_vector_8.9.cpp
	> Author: wangxiaoxian
	> Mail: 634897019@qq.com 
	> Created Time: Mon 18 Jul 2016 11:45:15 PM CST
 ************************************************************************/
/*编写函数打开文件用于输入，将文件内容读入 string 类
 * 型的 vector 容器，每一行存储为该容器对象的一个元素。
 */

#include<iostream>
#include<fstream>
#include<string>
#include<vector>
using namespace std;

int main()
{
    string s;
    ifstream input("8.9_test.txt");
    if(!input)
    {
        cerr << "error:unbale to open input file"<< endl;
        return -1;
    }
    vector<string> fileWord;
    while(input >> s)    //每个单词作为一个元素存储
    //while(getline(input, s))    //每一行作为一个元素存储
    {
        fileWord.push_back(s);
    }
    input.close();
    vector<string>::const_iterator it = fileWord.begin();
    while(it != fileWord.end())
    {
        cout << *it << endl;
        ++it;
    }
    return 0;

}

