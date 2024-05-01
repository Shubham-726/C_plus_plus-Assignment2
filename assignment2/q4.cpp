#include <iostream>
using namespace std;
int main()
{
    int radius;
    int height;
    cout << "enter radius";
    cin >> radius;
    cout << "enter height";
    cin >> height;
    float volume = 3.14 * radius * radius * height;
    cout << "volume of cylinder : " << volume;
}