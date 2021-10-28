#include <iostream>
int main()
{
using namespace std;
    int x;
    cin >> x; //first add
    int a = x / 100, b = (x / 10) % 10, c = x % 10;
    int ans = a * 100 + c * 10 + b;
    cout <<ans;
}

