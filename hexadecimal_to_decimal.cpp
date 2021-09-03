#include <iostream>
using namespace std;

int hexadecimaltodecimal(int n)
{
    int a = 10;
    int b = 11;
    int c = 12;
    int d = 13;
    int e = 14;
    int f = 15;

    int x = 1;
    int ans = 0;

    while (n > 0)
    {

        int y = n % 10;
        ans = ans + x * y;
        x = x * 16;
        n = n / 10;
    }
}

int main()
{

    int n;
    cin >> n;

    cout << hexadecimaltodecimal(n) << endl;
    return 0;
}