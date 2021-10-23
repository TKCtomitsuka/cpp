#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<int> x(105);
    vector<int> y(105);
    for (int i; i < N; i++)
        cin >> x[i] >> y[i];
    for (int i = 0; i < N; i++)
        for (int j = i + 1; j < N; j++)
            for (int k = j + 1; k < N; k++)
                if ((x[j] - x[i]) * (y[k] - y[i]) == (y[j] - y[i]) * (x[k] - x[i]))
                {
                    cout << "Yes" << endl;
                    return 0;
                }
    cout << "No" << endl;
}