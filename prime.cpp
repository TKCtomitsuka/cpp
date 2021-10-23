#include <iostream>
#include <vector>

using namespace std;

int main()
{
  int N;
  cin >> N;
  vector<int> factors;

  for (int i = 2; i * i <= N; i++)
  {
    while (N % i == 0)
    {
      factors.push_back(i);
      N /= i;
    }
    if (N == 1)
      break;
  }
  if (N != 1)
    factors.push_back(N);
  //cout << N << endl;//

  for (int i = 0; i < factors.size(); i++)
    cout << factors[i] << " ";

  return 0;
}