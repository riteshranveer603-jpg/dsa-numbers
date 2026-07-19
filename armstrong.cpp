#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cin >> n;

    if (n == 0)
    {
        cout << "yes";
        return 0;
    }

    int temp = n;
    int cnt = 0;

    while (temp > 0)
    {
        cnt++;
        temp /= 10;
    }

    temp = n;
    int a = 0;

    while (temp > 0)
    {
        int ld = temp % 10;
        a += round(pow(ld, cnt));
        temp /= 10;
    }

    cout << "cnt = " << cnt << endl;
    cout << "a = " << a << endl;

    if (a == n)
        cout << "yes";
    else
        cout << "no";
}