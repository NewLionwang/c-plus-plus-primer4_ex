/*************************************************************************
	> File Name: my_string.cpp
	> Author: wangxiaoxian
	> Mail: 634897019@qq.com 
	> Created Time: Fri 15 Jul 2016 06:47:28 PM CST
 ************************************************************************/
//自己实现string类
#include<iostream>
using namespace std;

class String
{
    friend ostream& operator << (ostream&,String&);
    friend istream& operator >> (istream&,String&);
    public:
        String(const char* str = 0);//普通构造函数
        String(const String &other);//拷贝构造函数
        ~String(void){delete [] m_data;}//析构函数
        String& operator=(const String &other);//赋值函数
    private:
        char *m_data;//用于保存字符串
};
//String构造函数
inline String::String(const char* str )
{
    if(str)
    {
        m_data = new char[strlen(str)+1];
        strcpy(m_data,str);
    }
    else
    {
        m_data = new char[1];//对空字符串自动申请存放结束标示'\0'
        *m_data = '\0';
    }
}

inline String::String(const String &other)
{
    m_data = new char[strlen(other.m_data)+1];
    strcpy(m_data,other.m_data);
}

inline String& String::operator=(const String &other)
{
    if(this == &other) //检查自赋值
        return *this;
    else
    {
        delete [] m_data;//释放原有内存资源
        m_data = new char[strlen(other.m_data)+1];
        strcpy(m_data,other.m_data);
        return *this; //返回本对象的引用
    }
}

ostream& operator << (ostream& os,String& str)
{
    os << str.m_data;
    return os;
}

istream& operator >> (istream& input,String& s)
{
    char tmp[255];
    input >> tmp;
    s = tmp;
    return input;
}
int main()
{
    char* p = "hello world";
    String s1("good job");
    String s(p);
    cout << s << endl;
    cout << s1 << endl;
    
    s1 = s;
    cout << s << endl << s1 << endl;
    return 0;
}
