/*************************************************************************
	> File Name: string_vector_point_4.34.cpp
	> Author: wangxiaoxian
	> Mail: 634897019@qq.com 
	> Created Time: Sun 12 Jun 2016 09:51:41 PM CST
 ************************************************************************/
/*编写程序读入一组 string 类型的数据，并将它们存储在
 * vector 中。接着，把该 vector 对象复制给一个字符指
 * 针数组。(为 vector 中的每个元素创建一个新的字符数
 * 组，并把该 vector 元素的数据复制到相应的字符数组
 * 中，最后把指向该数组的指针插入字符指针数组。)
 * */
#include<iostream>
#include<vector>
#include<string>
#include<cstddef>
using namespace std;

int main()
{
    string str;
    vector<string> svec;
    cout << "Enter string data(ctrl + D to end):" << endl;
    while(cin >> str)
        svec.push_back(str);
    //创建字符型指针数组
    char **pchar = new char*[svec.size()];
    size_t ix = 0;    

    for(vector<string>::iterator iter = svec.begin(); iter != svec.end(); ++iter,++ix)
    {
        //创建字符数组，用来存放vector每个元素
        char *p = new char[(*iter).size() + 1];
        strcpy(p, (*iter).c_str());
        pchar[ix] = p;
        delete [] p;//释放p内存
    }   

    //for(ix = 0; ix != svec.size(); ++ix)
        //delete [] pchar[ix];
    delete [] pchar;//释放pchar内存
    return 0;
}

