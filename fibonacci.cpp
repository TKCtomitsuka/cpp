#include <iostream>
#include <vector>

using namespace std;
vector<long long> memo(1000, -1);

int cnt = 0;
long long fibonacci(int n)
{
    cnt++;
    if (memo[n] != -1)
        return memo[n] % (1000000000 + 7);
    return memo[n] = (fibonacci(n - 1) + fibonacci(n - 2)) % (1000000000 + 7);
}
int main()
{
    int n;
    cout << "999以下の自然数を入れてください" << endl;
    cin >> n;
    memo[0] = 0;
    memo[1] = 1;
    if (n >= 1000)
        cout << "Error:1000以上の数字が入力されています。" << endl;
    else
        cout << "Fibonacci数列の第" << n << "項を1000000007で割ったあまりは" << fibonacci(n) << endl;
    return 0;
}
