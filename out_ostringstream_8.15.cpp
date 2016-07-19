/*************************************************************************
	> File Name: out_ostringstream_8.15.cpp
	> Author: wangxiaoxian
	> Mail: 634897019@qq.com 
	> Created Time: Tue 19 Jul 2016 12:54:39 AM CST
 ************************************************************************/

#include<iostream>
#include<sstream>
#include<string>
#include<stdexcept>
using namespace std;
istream & f(istream & in)
{
    string val;
    while(in >> val ,!in.eof())
    {
        if(in.bad())
        {
            throw runtime_error("IO stream corrupted");
        }
        if(in.fail())
        {
            cerr << "bad date, try again:";
            in.clear();
            in.setstate(istream::eofbit);
            continue;
        }
        cout << val << " ";
    }
    in.clear();
    return in;
}

int main()
{
    int val1 = 123,val2 = 234;
    ostringstream format_message;
    format_message << "vall:" << val1 <<"val2:" 
                    << val2 << "\n";
    cout << "beging cout the format_message:\n" << endl;
    istringstream input_istring(format_message.str());
    f(input_istring);
    return 0;
}
