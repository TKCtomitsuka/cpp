#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <string>
using namespace std;

int main()
{
    int a[4];
    int Sum;
    for (int i = 0; i < 4; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < sizeof(a) / sizeof(*a); i++)
    {
        Sum++;
    }
    bool check = false;
    for (int bit = 0; bit < (1 << 4); bit++)
    {
        int sum = 0;
        for (int i = 0; i < 4; i++)
        {
            if (bit & 1 << i)
            {
                sum += a[i];
            }
        }
        if (2 * sum == Sum)
            check = true;
    }
    if (check)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}