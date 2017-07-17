/*
* 从标准输入读取一个字符串，存在一个动态分配的字符数组中。
* 描述程序如何处理变长输入。
* 测试程序，输入一个超出分配的字符数组的长度的字符串。
*/
#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char c;

    //分配20个字符的动态数组；因此最多存放19个字符
    char *r = new char[20];
    int i = 0;

    while (cin.get(c))
    {
        if (isspace(c)) //空格符，制表符等空白符
            break;
        r[i++] = c;
        if (i == 20)
        {
            cout << "达到数组数量上限...." <<endl;
            break;
        }
    }
    r[i] = '\0';
    //r[i] = 0;
    cout << r << endl;
    delete [] r;

    return 0;
}
