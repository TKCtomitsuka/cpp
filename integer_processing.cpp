#include <iostream>
#include <vector>
#include <algorithm>

class integer_proc
{
public:
    long long N;
    integer_proc();
    std::vector<long long> divisor();
    std::vector<long long> factorization();
};

integer_proc::integer_proc()
{
    std::cin >> N;
}

std::vector<long long> integer_proc::factorization()
{
    std::vector<long long> prime;
    long long temp = N;
    for (long long i = 2; i * i <= N; i++)
    {
        while (N % i == 0)
        {
            prime.push_back(i);
            N /= i;
        }
    }
    if (N != 1)
        prime.push_back(N);
    return prime;
}

std::vector<long long> integer_proc::divisor()
{
    std::vector<long long> res;
    for (long long i = 1; i * i <= N; i++)
    {
        if (N % i == 0)
        {
            res.push_back(i);
            if (i != N / i)
                res.push_back(N / i);
        }
    }
    std::sort(res.begin(), res.end());
    return res;
}

int main()
{
    integer_proc a;
    std::cout << "約数は{";
    for (auto i : a.divisor())
        std::cout << i << " ";
    std::cout << "}です。" << std::endl;
    std::vector<long long> b = a.divisor();
    std::cout << "その合計は";
    long long sum;
    for (long long j = 0; j < b.size(); j++)
    {
        sum += b[j];
    }
    std::cout << sum << "です。" << std::endl;
    std::cout << "素因数分解は";
    std::vector<long long> c = a.factorization();
    for (int i = 0; i < c.size() - 1; i++)
    {
        std::cout << c[i] << "*";
    }
    std::cout << c[c.size() - 1] << "です。" << std::endl;
}