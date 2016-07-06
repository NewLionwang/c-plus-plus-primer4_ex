/*************************************************************************
	> File Name: func_struct.cpp
	> Author: wangxiaoxian
	> Mail: 634897019@qq.com 
	> Created Time: Mon 27 Jun 2016 10:27:52 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;

struct Point3d
{
    double x;
    double y;
    double z;
};
 
Point3d getZeroPoint()
{
    Point3d tmp = {0.0, 0.0, 0.0};
    return tmp;
}

int main()
{
    Point3d zero = getZeroPoint();
    if(zero.x == 0.0 && zero.y == 0.0 && zero.z == 0.0)
        cout << "The Point is zero \n";
    else 
        cout << "The Point is not zero \n";
    return 0;
}

