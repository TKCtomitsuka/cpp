#include <iostream>
using namespace std;

int main()
{
    int x, y;
    cin >> x >> y;
    if (x > y)
    {
        if (x >= y + 3)
        {
            cout << "No" << endl;
        }
        else
        {
            cout << "Yes" << endl;
        }
    }
    else
    {
        if (y >= x + 3)
        {
            cout << "No" << endl;
        }
        else
        {
            cout << "Yes" << endl;
        }
    }
}