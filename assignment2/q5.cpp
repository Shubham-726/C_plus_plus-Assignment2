#include <iostream>
using namespace std;
int main()
{
    char x, y;
    cout << "enter first character"<<endl;
    cout << "enter second character"<<endl;
    cin >> x >> y;
    int a = (int)x;
    int b = (int)y;
    cout << "difference b/w" << x << "and" << y << "is :" << b - a;
}