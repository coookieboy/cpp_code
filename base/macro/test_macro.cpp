#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;
/**
 * 定义宏
*/
#define printx(x) cout << #x " = " << x << "\n";

int main()
{
    int a = 7;
    string str = "asdf";
    printx(a);
    printx(str);
    return 0;
}