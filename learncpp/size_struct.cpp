/*************************************************************************
	> File Name: size_struct.cpp
	> Author: wangxiaoxian
	> Mail: 634897019@qq.com 
	> Created Time: Mon 27 Jun 2016 10:40:19 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;

struct Employee
{
    short id;
    int age;
    double wage;
};
 
int main()
{
    cout << "The size of Employee is " << sizeof(Employee) << "\n";
    return 0;
}
